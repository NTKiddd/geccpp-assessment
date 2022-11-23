#include <iostream>
#include <fstream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <cctype>

using namespace std;
void playWordle();
void highScores();
string username;

int main()
{
    int menuChoice;
    /*
    cout << "ENTER YOUR USERNAME: ";
    cin >> username;
    cout << "\n";
    */
    cout << "Where do you want to proceed? \n";
    cout << "(1) Play Wordle \n";
    cout << "(2) High Scores \n"; 
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
    int wordChoice;
    int charFound;
    int score = 0;
    int attempt;
    int wordUsed[7];
    string playerGuess;
    string answerWord;
    ifstream finword;
    ofstream foutscore;
    string wordList[7];
    
    finword.open("wordstoguess.txt");
    foutscore.open("highscores.txt", ios::out | ios::ate | ios::in);

    for (int i = 0; i < 7; i++)
    {
        getline(finword, wordList[i]);
    }

    while (play)
    {   
        srand(time(NULL));
        wordChoice = 0 + (rand() % 7);
        for (int h = 0; h < score; h++)
        {
            if (wordChoice == wordUsed[h])
                wordChoiceValid = false;
            else
                wordChoiceValid = true;
        }
        if (wordChoiceValid)
        {
            answerWord = wordList[wordChoice];
            //cout << answerWord << "\n";
            cout << "_ _ _ _ _ \n";
            guessing = true;
            attempt = 6;
            cout << score << "\n";
            
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
                    cout << "Invalid. Please re-enter.\n";
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
                    }

                    if (attempt == 0)
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
    int amountOfScores = 0;
    string scoreTemp;
    ifstream finscore;
    finscore.open("highscores.txt");

    cout << "HIGH SCORES \n\n";
    while (getline(finscore, scoreTemp))
    {  
        cout << scoreTemp << "\n";
        amountOfScores++;
    }
    cout << "amount of scores: " << amountOfScores;
    //for (int k; k < amountOfScores; k++)
}

