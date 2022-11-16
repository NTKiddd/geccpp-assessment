#include <iostream>
#include <fstream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    string username;
    int menuChoice;

    cout << "ENTER YOUR USERNAME: ";
    cin >> username;
    cout << "\n";

    cout << "Where do you want to proceed? \n";
    cout << "(1) Play Wordle \n";
    cout << "(2) High Scores"; 
    cin >> menuChoice;

    if (menuChoice == 1)
    {
        cout << "WORDLE";
    }  
    else if (menuChoice == 2)
    {
        cout << "HIGH SCORES";
    }

    return 0;
}

void playWordle()
{
    bool playing;

    if (playing)
    {
        ofstream fout;
        fout.open("wordstoguess");

        if (!fout)
            cout << "failed to open file";
    }
}

