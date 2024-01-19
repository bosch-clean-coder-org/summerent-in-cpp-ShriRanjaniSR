#include <iostream>

using namespace std;

void acceptStringArray()
{
    
    
}

int main()
{
    cout<<"Hello World\n";

	int x, n;
	cout << "Enter the number of strings:" << "\n";
	cin >> n;
	
	std::string *collection = new std::string[n];
	for(unsigned int i = 0; i < n; i++)
	{
	    cout << "Enter string " << i+1 << endl;
        std::cin>>collection[i];
    }
    
    cout << "The entered strings are: ";
    for(unsigned int i = 0; i < n; i++)
	{
	    cout << collection[i] << " ";
    }
    cout << endl;
    
    cout << "Enter the size limit that you want to check the strings against: ";
    cin >> x;

    cout << "The strings that qualify are: ";
    for(unsigned int i = 0; i < n; i++)
	{
	    if(collection[i].length() > x)
	    { 
	        cout << collection[i] << " ";
	    }
    }
    return 0;
}
