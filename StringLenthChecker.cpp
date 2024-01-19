#include <iostream>
#include "StringLenthChecker.h"

using namespace std;
int sizeOfArray, sizeLimit;
std::string *collection;

int acceptStringCheckerInputParamsAndAnalyse(const vector<string>& stringArray, int sizeLimit)
{
   if(stringArray.size() == 0) || sizeLimit < 0)
   {
       cout <<"Invalid Input \n";
       return -1;
   }
    cout << "The entered strings are: ";
    for(unsigned int i = 0; i < stringArray.size(); i++)
    {
	cout << stringArray[i] << " ";
    }
    int count=0;
    cout << "The strings that qualify are: ";
    for(unsigned int i = 0; i < sizeOfArray; i++)
    {
	if(stringArray[i].length() > sizeLimit)
	{
	    count++;
	    cout << stringArray[i] << " ";
	}
    }
    return count;
}


