//main.cpp - main function

#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

//Include Code class header file
#include "Code.h"

// Include Response class header file
#include "Response.h"

// Include Mastermind class header file
#include "Mastermind.h"

//using namespace std;

int main()
{

    cout << "WELCOME! This is MASTERMIND prepare to be blown through the mind! "<< endl;
    int i;
    while(true){
        cout << "Enter the corresponding number to do the thing"<<endl;
        cout << "1: Play With Normal Rules" << endl << "2: Play With Your Own Range and Length" << endl << "3: Quit"<<
        endl;
        cin >> i;
    switch(i)
    {
        //PLAY WITH NORMAL RULES
        case 1:
        {
            Mastermind m1;
            m1.playGame();
            break;
        }

        //PLAY WITH THEIR OWN RANGE AND LENGTH
        case 2:
        {
            int length;
            int range;
            cout << "Enter the length of numbers you want to guess: ";
            cin >> length;
            cout << "\nEnter the range of numbers you want the guess to have: ";
            cin >> range;
            Mastermind m2(length,range);
            m2.playGame();
            break;
        }

        //QUIT THE GAME
        case 3:
        {
            exit(0);
            break;
        }
        default: {
            cout << "Enter a valid option plz, and tank you: " << endl;
        }
    }
    }
}