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
    void highScores();
    int menuChoice;

    system("cls");
    cout << "Welcome to Wordle! Where do you want to proceed? \n";
    cout << "(1) Play Wordle \n";
    cout << "(2) View High Scores \n"; 
    cin >> menuChoice; 

    if (menuChoice == 1)
    {   
        playWordle();
    }  
    else if (menuChoice == 2)
    {
        highScores();
    }

    return 0;
}

void playWordle()
{
    bool play = true;
    bool guessing = true;
    bool inputValid;
    bool wordChoiceValid;
    bool isWin = false;
    int wordChoice;
    int charFound;
    int score = 0;
    int attempt;
    int wordUsed[15];
    string username;
    string playerGuess;
    string answerWord;
    ifstream finword;
    ofstream foutscore;
    string wordLib[15];

    system("cls");
    cout << "ENTER YOUR USERNAME: ";
    cin >> username;
    system("cls");
    cout << "======= WORDLE =======\n\n";
    cout << "USERNAME: " << username << "\n\n";
    Sleep(1000);
    cout << "Let's guess some words! \n";
    Sleep(1000);
    
    finword.open("wordstoguess.txt");
    foutscore.open("highscores.txt", ios::out | ios::ate | ios::in);

    for (int i = 0; i < 15; i++)
    {
        getline(finword, wordLib[i]);
    }

    while (play)
    {   
        srand(time(NULL));
        wordChoice = 0 + (rand() % 15);
        isWin = false;

        for (int h = 0; h < score; h++)
        {
            if (wordChoice == wordUsed[h])
                wordChoiceValid = false;
            else
                wordChoiceValid = true;
        }

        if (wordChoiceValid)
        {
            answerWord = wordLib[wordChoice];
            //cout << answerWord << "\n";
            cout << "_ _ _ _ _ \n\n";
            guessing = true;
            attempt = 6;
            cout << "Current score: " << score << "\n";
            
            while (guessing)
            {   
                cout << "Attempt left: " << attempt << "\n";
                cout << "Enter your guess: ";
                cin >> playerGuess;
                if (playerGuess.size() == 5)
                {
                    inputValid = true;
                }
                else
                {
                    inputValid = false;
                    cout << "\n";
                    cout << "Invalid, your word need to has 5 letters. Please re-enter.\n";
                }
                
                if (inputValid)
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

                    attempt = attempt - 1;
                    cout << "\n\n";

                    if (playerGuess.compare(answerWord) == 0)
                    {
                        cout << "correct \n\n";
                        wordUsed[score] = wordChoice;
                        score++;
                        guessing = false;
                        isWin = true;
                    }

                    if (attempt == 0 && !isWin)
                    {                
                        cout << "You dumb. Your score is " << score;
                        foutscore << username << " " << score << "\n";
                        guessing = false;
                        play = false;
                    }   
                }
            }                
        }
    }
}

void highScores()
{
    string scoreDisplay;
    ifstream finscore;
    finscore.open("highscores.txt");
    int choice;
    int main();

    system("cls");
    cout << "======= HIGH SCORES ======= \n\n";
    while (getline(finscore, scoreDisplay))
    {  
        cout << scoreDisplay << "\n";
    }
    cout << "\n" << "Enter 0 to go back to menu. \n";
    cin >> choice;

    if (choice == 0)
        main();     
}