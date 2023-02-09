// Code.h - header file - declaration for Code Class

#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

#ifndef CODE_H
#define CODE_H

using namespace std;

class Code
{
private:
    int codeLength;
    int codeRange;
    vector<int> code;

public:
    // Default Constructor
    Code();

    // Constructor
    Code(int const& n, int const& m);

    // Construcor with Vector passed
    Code(int const& n, int const& m, vector<int> const& givenCode);

    // Randomly generates the code from length and range of digits
    void generateCode(int const& n, int const& m);

    // Returns number of correct digits in correct spot
    int checkCorrect(Code guessCode);

    // Returns number of correct digits in incorrect spot
    int checkIncorrect(Code guessCode);

    // Returns the length of the code
    int getLength();

    // Returns the range of the code
    int getRange();

    // Returns element at index index of code vector
    int elementAt(int const& index);

    // Returns code
    vector<int> readCode();

    // Prints code
    void printCode();
};

#endif CODE_H