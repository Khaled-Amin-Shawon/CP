#include <iostream>
#include <windows.h>
#include <sapi.h>

// Function to speak text using SAPI (Speech API)
void Speak(const char* text) {
    CoInitialize(NULL);
    ISpVoice* pVoice;
    HRESULT hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void**)&pVoice);

    if (SUCCEEDED(hr)) {
        pVoice->Speak((wchar_t*)text, 0, NULL);
        pVoice->Release();
    }
    CoUninitialize();
}

int main() {
    // Initialize the Windows Speech Recognition engine
    if (FAILED(::CoInitialize(NULL))) {
        std::cerr << "COM initialization failed." << std::endl;
        return 1;
    }

    ISpRecognizer* pRecognizer;
    if (FAILED(::CoCreateInstance(CLSID_SpSharedRecognizer, NULL, CLSCTX_ALL, IID_ISpRecognizer, (void**)&pRecognizer))) {
        std::cerr << "Failed to create recognizer." << std::endl;
        ::CoUninitialize();
        return 1;
    }

    if (FAILED(pRecognizer->SetInput(NULL, TRUE))) {
        std::cerr << "Failed to set input." << std::endl;
        pRecognizer->Release();
        ::CoUninitialize();
        return 1;
    }

    // Set the recognition event handler
    ISpRecoContext* pContext;
    if (SUCCEEDED(pRecognizer->CreateRecoContext(&pContext))) {
        pContext->SetNotifyWin32Event();
        pContext->SetInterest(SPFEI(SPEI_RECOGNITION), SPFEI(SPEI_RECOGNITION));

        // Main recognition loop
        while (true) {
            DWORD event;
            WaitForSingleObject(pContext->GetNotifyEventHandle(), INFINITE);
            pContext->GetEvents(1, &event, NULL);
            if (event == SPFEI(SPEI_RECOGNITION)) {
                ISpRecoResult* pResult;
                if (SUCCEEDED(pContext->GetResult(&pResult))) {
                    WCHAR* pText;
                    if (SUCCEEDED(pResult->GetText(SP_GETWHOLEPHRASE, SP_GETWHOLEPHRASE, TRUE, &pText, NULL))) {
                        std::wcout << L"Recognized: " << pText << std::endl;

                        // Example commands
                        if (wcscmp(pText, L"hello") == 0) {
                            Speak("Hello, how can I assist you?");
                        } else if (wcscmp(pText, L"exit") == 0) {
                            Speak("Goodbye!");
                            break;
                        }

                        ::CoTaskMemFree(pText);
                    }
                    pResult->Release();
                }
            }
        }

        pContext->Release();
    }

    pRecognizer->Release();
    ::CoUninitialize();

    return 0;
}
