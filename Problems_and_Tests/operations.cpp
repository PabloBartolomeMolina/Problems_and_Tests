#include <iostream>  
#include <regex>
#include <string>

#include "operations.h"

using namespace std;

using std::string;
using std::getline;
using std::regex;

string Operations::getInput(string demand)
{
	string inputText = "empty";
	cout << demand;					// Ask for any type of input
	getline(cin, inputText);		// Get user input from the keyboard
	return inputText;
}

void Operations::divide()
{
	float div = 0;
	int temp = 0;
	string tmp = "0";
	bool first = true;

	for (int i = 0; i < 2; i++)
	{
		tmp = getInput("Enter a number to divide: ");

		bool verify = checkInput(tmp);

		if (verify)
		{
			// It is a number, proceed with the sum.
			temp = stoi(tmp);
			if (first)
			{
				div = (float)temp;
				first = !first;
			}
			else if (temp != 0)
			{
				div = (float)(div / temp);
			}
			else
			{
				cout << "It is not possible to divide by 0!!" << endl;
			}
		}
		else
		{
			// It is not a number, error message displayed.
			cout << "It is not a valid number and will not be tqken into account." << endl;
		}
	}
	cout << "Result: " << div << endl;
}