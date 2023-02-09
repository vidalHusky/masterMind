// Response.cpp - implementation for Response Class

#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

// Include Response class header file
#include "Response.h"

// Include Code class header file
#include "Code.h"

using namespace std;

Response::Response() 
{
	numCorrect = 0;
	numIncorrect = 0;
}

// reads number correct
int Response::getNumCorrect() 
{
	return numCorrect;
}

// reads number incorrect
int Response::getNumIncorrect()
{
	return numIncorrect;
}

// sets number correct
void Response::setNumCorrect(const int& num)
{
	numCorrect = num;
}

// sets number incorrect
void Response::setNumIncorrect(const int& num)
{
	numIncorrect = num;
}

// returns true if two response 
bool Response::operator==(const Response& otherResponse)
{
	if (this->numCorrect == otherResponse.numCorrect && this->numIncorrect == otherResponse.numIncorrect) {
		return true;
	}
	return false;
}

// prints the response
ostream& operator<<(ostream& ostr, const Response& Resp)
{
	ostr << Resp.numCorrect << ", " << Resp.numIncorrect;
	return ostr;
}
