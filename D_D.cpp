#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c)
{
    std::set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    return vowels.find(c) != vowels.end();
}

bool isConsonant(char c)
{
    std::set<char> consonants = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm',
                                 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    return consonants.find(c) != consonants.end();
}

bool isBerlanese(const std::string &word)
{
    for (size_t i = 0; i < word.length(); ++i)
    {
        char currentChar = word[i];
        if (isConsonant(currentChar) && currentChar != 'n')
        {
            if (i == word.length() - 1 || !isVowel(word[i + 1]))
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    string word;
    cin >> word;

    if (isBerlanese(word))
    {
        cout << "YES" << std::endl;
    }
    else
    {
        cout << "NOT" << std::endl;
    }
}
