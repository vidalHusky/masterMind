// Code.cpp - implementation for Code Class

#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

//Include Code class header file
#include "Code.h"

using namespace std;

// Default Constructor
Code::Code()
{
    codeLength = 5;
    codeRange = 10;
    generateCode(5, 10);
}

// Constructor
Code::Code(int const& n, int const& m)
{
    codeLength = n;
    codeRange = m;
    generateCode(codeLength, codeRange);
}

// Constructor with Vector passed
Code::Code(int const& n, int const& m, vector<int> const& givenCode)
{
    codeLength = n;
    codeRange = m;
    code = givenCode;
}

// Accepts two integer values which are the code length and code range and returns a vector secretCode of length n and range m
void Code::generateCode(int const& n, int const& m)
{
    //Uses the time to create a randomized sequence of values
    srand(time(NULL));

    code.clear();
    codeLength = n;
    codeRange = m;
    //For loop which populates the secret code with random values spaning within the range
    for (int i = 0; i < n; i++)
    {
        code.push_back(rand() % m); //adds to secretCode vector an integer in range 0 -> m - 1
    }
}

// Takes the guess vector and returns how many elements are in the secret code and in the correct location
int Code::checkCorrect(Code guessCode)
{
    int many = 0;
    for (int t = 0; t < guessCode.getLength(); t++)
    {
        if (guessCode.elementAt(t) == code[t])
            many++;
    }
    return many;
}

// Takes the guess vector and returns how many elements are in the secret code but in the incorrect location
int Code::checkIncorrect(Code guessCode)
{
    int guessCodeLength = guessCode.getLength();

    vector<bool> guessCounted(guessCodeLength);
    vector<bool> codeCounted(code.size());
    int count = 0;
    for (int i = 0; i < code.size(); i++)
    {
        for (int j = 0; j < guessCodeLength; j++)
        {
            if (guessCode.elementAt(j) == code[i] && j != i)
            {
                if (!guessCounted[i] && !codeCounted[j] && code[i] != guessCode.elementAt(i) && code[j] != guessCode.elementAt(j))
                {
                    count++;
                }
                guessCounted[i] = true;
                codeCounted[j] = true;
            }
        }
    }
    return count;
}

// Returns the length of the code
int Code::getLength()
{
    return codeLength;
}

// Returns the range of the code
int Code::getRange()
{
    return codeLength;
}

// Returns element at index index of code vector
int Code::elementAt(int const& index)
{
    return code[index];
}

// Returns secret code
vector<int> Code::readCode()
{
    return code;
}

// Prints code
void Code::printCode()
{
    for (int i = 0; i < this->getLength(); i++)
    {
        cout << code[i] << ' ';
    }
}