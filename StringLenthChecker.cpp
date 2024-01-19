#include <iostream>
#include "StringLenthChecker.h"
#include <vector>
#include <string>

int acceptStringVectorAndCheckForLength(const std::vector<std::string>& stringArray, int sizeLimit)
{
   if((stringArray.size() == 0) || sizeLimit < 0)
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
    for(unsigned int i = 0; i < stringArray.size(); i++)
    {
	if(stringArray[i].length() > sizeLimit)
	{
	    count++;
	    cout << stringArray[i] << " ";
	}
    }
    return count;
}


