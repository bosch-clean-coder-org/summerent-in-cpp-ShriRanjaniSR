#include <iostream>
#include <StringLenthChecker.h>

using namespace std;
int sizeOfArray, sizeLimit;
std::string *collection;

void acceptStringCheckerInputParams()
{
    cout << "Enter the number of strings:" << "\n";
    cin >> sizeOfArray;
    collection = new std::string[sizeOfArray];
    for(unsigned int i = 0; i < sizeOfArray; i++)
    {
	cout << "Enter string " << i+1 << endl;
        std::cin>>collection[i];
    }
    
    cout << "The entered strings are: ";
    for(unsigned int i = 0; i < sizeOfArray; i++)
    {
	cout << collection[i] << " ";
    }
    cout << endl;
    cout << "Enter the size limit that you want to check the strings against: ";
    cin >> sizeLimit;
}

void checkStringsAgainstSize()
{
    cout << "The strings that qualify are: ";
    for(unsigned int i = 0; i < sizeOfArray; i++)
    {
	if(collection[i].length() > sizeLimit)
	{ 
	    cout << collection[i] << " ";
	}
    }
}
