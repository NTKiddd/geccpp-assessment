#include <iostream>
#include <fstream>
#include <windows.h>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    void playWordle();
    string username;
    int menuChoice;
    ofstream userInputFlush;

    userInputFlush.open("trash.txt");

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
    int wordChoice;
    char charFound;
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
        cout << "_____ \n";
        cout << "Enter your guess: \n";
        cin >> playerGuess;

        for (int j = 0; j < answerWord.size(); j++)
        {
            if (playerGuess.at(j) == answerWord.at(j))
            {
                cout << "found";
            }
        }
    }
}

