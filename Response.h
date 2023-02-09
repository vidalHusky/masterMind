// Response.h - header file - declaration for Response Class

#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

#ifndef RESPONSE_H
#define RESPONSE_H

//Include Code class header file
#include "Code.h"

using namespace std;

class Response
{
private:
    int numCorrect;     //number correct
    int numIncorrect;   //number incorrect

public:
    // Constructor
    Response();

    // reads number correct
	int getNumCorrect();

    // reads number incorrect
    int getNumIncorrect();

    // sets number correct
    void setNumCorrect(const int& num);

    // sets number incorrect
    void setNumIncorrect(const int& num);

    // returns true if two response 
    bool operator==(const Response& otherResponse);

    // prints the response
    friend ostream& operator<<(ostream& ostr, const Response& Resp);
    
};

#endif RESPONSE_H