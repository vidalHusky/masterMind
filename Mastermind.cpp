// Mastermind.cpp - implementation for Mastermind Class

#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

// Include Response class header file
#include "Response.h"

// Include Code class header file
#include "Code.h"

// Include Mastermind class header file
#include "Mastermind.h"

// Constructor
Mastermind::Mastermind(int n, int m)
{
	/*length = n;
	range = m;*/
	secretCode.generateCode(n, m);
}

// Constructor
Mastermind::Mastermind()
{

	secretCode.generateCode(5, 10);
}

// Prints code1
void Mastermind::printCode()
{
	secretCode.printCode();
}

// Reads guess from keyboard and returns code object that represents guess
Code Mastermind::humanGuess()
{
	vector<int> guessVector;
	int currentVal;
	int length = secretCode.getLength();
	for (int i = 0; i < length; i++)
	{
		cout << "Enter digit " << i + 1 << " of guess: ";
		cin >> currentVal;
		guessVector.push_back(currentVal);
	}
	Code guess(length, secretCode.getRange(), guessVector);
	return guess;
}

// Gets passed a code and returns a response
Response Mastermind::getResponse(Code code1)
{
	Response r1;
	r1.setNumCorrect(secretCode.checkCorrect(code1));
	r1.setNumIncorrect(secretCode.checkIncorrect(code1));
	return r1;
}

// Gets passed a response and returns true if the response indicates that the board has been solved
bool Mastermind::isSolved(Response r1)
{
	if (r1.getNumCorrect() >= secretCode.getLength()) {
		return true;
	}
	return false;
}

// initializes a random code, prints it, and iteratively gets a guess from the user
// and prints the response until either the codemaker or the codebreaker has won
void Mastermind::playGame()
{
    int i = 0;
	secretCode.generateCode(secretCode.getLength(), secretCode.getRange());
	cout << "--- ";
    secretCode.printCode();
    cout << "---";
    cout << endl;
	for (i; i < 10; i++) {
        //Code guess1 = humanGuess();
		Response resp = getResponse(humanGuess());
		if (isSolved(resp)) {
			cout << "Codebreaker Wins!"<< endl << endl;
			break;
		}
		cout << resp << endl;
	}

	if (i == 10)
    {
        cout << "Codemaker Wins!" << endl;
    }
}