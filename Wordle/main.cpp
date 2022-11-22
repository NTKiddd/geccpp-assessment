#include <iostream>
#include <fstream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <cctype>

using namespace std;
void playWordle();
void highScores();

int main()
{
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
    bool valid;
    int wordChoice;
    int charFound;
    int score = 0;
    int attempt = 6;
    string playerGuess;
    string answerWord;
    ifstream finword;
    ofstream foutscore;
    string wordList[3];
    
    finword.open("wordstoguess.txt");
    foutscore.open("highscores.txt");

    for (int i = 0; i < 3; i++)
    {
        getline(finword, wordList[i]);
    }

    while (play)
    {   
        srand(time(NULL));
        wordChoice = 0 + (rand() % 3);
        answerWord = wordList[wordChoice];
        cout << answerWord << "\n";
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
                valid = true;
            }
            else
            {
                valid = false;
                cout << "\n";
                cout << "Invalid. Please re-enter.\n";
            }
            
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

                attempt = attempt - 1;
                cout << "\n";

                if (playerGuess.compare(answerWord) == 0)
                {
                    cout << "correct \n\n";
                    score++;
                    guessing = false;
                }

                if (attempt == 0)
                {                
                    cout << "You dumb. Your score is " << score;
                    foutscore << score;
                    guessing = false;
                    play = false;
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

    cout << "HIGH SCORES \n\n";
    while (!finscore.eof())
    {
        finscore >> scoreDisplay;  
        cout << scoreDisplay << "\n";
    }
}
