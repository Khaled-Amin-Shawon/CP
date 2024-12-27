
import pyttsx3
import wikipedia
import datetime
import speech_recognition as sr
import pyaudio
import os
import webbrowser
import time
import random 

engine = pyttsx3.init('sapi5')
voives = engine.getProperty('voices')
# print(voives,voives[0].id)
engine.setProperty(voives,voives[1].id)

def speak(audio):
   engine.say(audio)
   engine.runAndWait()
   
def wishMe():
   hour = int( datetime.datetime.now().hour)
   if hour>=0 and hour<12:
       speak("Good Morning!")

   elif hour>=12 and hour<18:
        speak("good afternoon!") 
   else:
       speak("  Good evening!")
   speak("I am khaled, sir. Please tell me how may I help you")

def takeCommand():
    # it take microphone input from the user and return string output
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 1
        audio =r.listen(source)
    try:
        print("recognizing...")
        query = r.recognize_google(audio, language='en-us ')
        print(f"User said :{query}\n")
       
    except Exception as e :
        #print(e)
        print("Say that again please...")
        speak("Say that again please...")
        return "None"
    return query   

if __name__ == "__main__":
  wishMe()
  while True:
      query = takeCommand().lower()
      if 'wikipedia' in query:
            speak('Searching Wikipedia...')
            query = query.replace("wilipedia", "")
            results = wikipedia.summary(query, sentences=2)
            speak("According to wikipedia")
            print(results)
            speak(results)
        
      elif 'open youtube' in query:
         chrome = "C:\Program Files\Google\Chrome\Application\chrome.exe %s"
         url = 'https://youtube.com/'
        #   # Open URL in a new tab, if a browser window is already open.
        #  webbrowser.open_new_tab(url)
         # Open URL in new window, raising the window if possible.
         webbrowser.open_new(url)
         
      elif 'open google' in query:
         chrome = "C:\Program Files\Google\Chrome\Application\chrome.exe %s"
         url = 'https://google.com/'
         webbrowser.open_new(url)
         
      elif 'open facebook' in query:
         chrome = "C:\Program Files\Google\Chrome\Application\chrome.exe %s"
         url = 'https://facebook.com/'
         webbrowser.open_new(url)      
        
      elif 'play music' in query:
          music_dir = 'E:\\Video' 
          songs= os.listdir(music_dir)
         # print(songs)
          os.startfile(os.path.join(music_dir, songs[0]))
          
      elif 'what time' in query:
           strTime= datetime.datetime.now().strftime("%H:%M:%S")
           speak(f"Sir, The time is {strTime}")  
      elif 'open visual studio' in query:
          codePath="D:\\Microsoft VS Code\\Code.exe"
          os.startfile(codePath)
      elif 'open word' in query:
            codePath="C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE"
            os.startfile(codePath)
            
      elif 'how are you' in query:     
          speak("I am ok, And you?")
      
      elif 'what is your name' in query:     
          speak("I am khaled")            
      elif 'stop it' in query:
        speak("ok, i quit")