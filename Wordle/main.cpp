#include <iostream>
#include <fstream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    void playWordle();
    string username;
    int menuChoice;

    //cout << "ENTER YOUR USERNAME: ";
    //cin >> username;
    cout << "\n";

    cout << "Where do you want to proceed? \n";
    cout << "(1) Play Wordle \n";
    cout << "(2) High Scores \n"; 
    cin >> menuChoice; 

    if (menuChoice == 1)
    {
        cout << "WORDLE \n\n";
        playWordle();
    }  
    else if (menuChoice == 2)
    {
        cout << "HIGH SCORES \n\n";
    }

    return 0;
}

void playWordle()
{
    bool playing = true;
    bool guessing = true;
    bool valid;
    int wordChoice;
    int charFound;
    int attempt = 6;
    string playerGuess;
    string answerWord;
    ifstream fin;
    ofstream fout;
    string wordList[3];
    fin.open("wordstoguess.txt");

    for (int i = 0; i < 3; i++)
    {
        getline(fin, wordList[i]);
    }

    
    if (playing)
    {   
        srand(time(NULL));
        wordChoice = 0 + (rand() % 3);
        answerWord = wordList[wordChoice];
        cout << answerWord << "\n";
        cout << "_ _ _ _ _ \n";
        
        while (guessing)
        {
            cout << "Enter your guess: ";
            cin >> playerGuess;
            if (playerGuess.size() == 5)
                valid = true;
            else
                valid = false;
                cout << "Reenter";
            
            if (valid)
            {
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

                for (int j = 0; j < answerWord.size(); j++)
                {
                    playerGuess[j] = toupper(playerGuess[j]); 
                    charFound = answerWord.find(playerGuess[j]);
                    if (playerGuess[j] == answerWord[j])
                    {
                        SetConsoleTextAttribute(h, 47);
                        cout << playerGuess[j];
                    }
                    else if (playerGuess[j] != answerWord[j] && charFound != -1)
                    {
                        SetConsoleTextAttribute(h, 111);
                        cout << playerGuess[j];
                    }
                    else 
                    {
                        SetConsoleTextAttribute(h, 79);
                        cout << playerGuess[j];
                    }
                }
                SetConsoleTextAttribute(h, 15);
            }

            attempt = attempt - 1;
            cout << "\n\n";
            cout << "Attempt left: " << attempt << "\n";

            if (attempt == 0)
            {
                guessing = false;
                cout << "You dumb.";
            }
        }
    }
}

