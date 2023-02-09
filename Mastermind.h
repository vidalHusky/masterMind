// Mastermind.h - header file - declaration for Mastermind Class

#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

#ifndef MASTERMIND_H
#define MASTERMIND_H

//Include Code class header file
#include "Code.h"

// Include Response class header file
#include "Response.h"

using namespace std;

class Mastermind
{
private:
	Code secretCode;
	/*int length;
	int range;*/

public:
	// Constructor
	Mastermind(int n, int m);

	// Constructor
	Mastermind();

	// Prints code1
	void printCode();

	// Reads guess from keyboard and returns code object that represents guess
	Code humanGuess();

	// Gets passed a code and returns a response
	Response getResponse(Code secretCode);

	// Gets passed a response and returns true if the response indicates that the board has been solved
	bool isSolved(Response r1);

	// initializes a random code, prints it, and iteratively gets a guess from the user
	// and prints the response until either the codemaker or the codebreaker has won
	void playGame();

};

#endif MASTERMIND_H