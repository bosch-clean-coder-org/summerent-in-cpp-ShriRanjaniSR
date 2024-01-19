#include <iostream>
#include "StringLenthChecker.h"
#include <vector>
#include <string>

void displayStringInput(const std::vector<std::string>& stringArray)
{
    cout << "The entered strings are: ";
    for(unsigned int i = 0; i < stringArray.size(); i++)
    {
	cout << stringArray[i] << " ";
    }
}

int checkForSizeLimitAndPrintToConsole(const std::vector<std::string>& stringArray, int sizeLimit)
{
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

int acceptStringVectorAndCheckForLength(const std::vector<std::string>& stringArray, int sizeLimit)
{
   if((stringArray.size() == 0) || sizeLimit < 0)
   {
       cout <<"Invalid Input \n";
       return -1;
   }
   displayStringInput(stringArray);
   int count = checkForSizeLimitAndPrintToConsole(stringArray,sizeLimit);
   return count;
}


