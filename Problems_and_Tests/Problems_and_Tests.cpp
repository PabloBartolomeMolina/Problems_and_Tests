// Problems_and_Tests.cpp : définit le point d'entrée de l'application.
//

#include "Problems_and_Tests.h"

#include <string>
#include <regex>


using namespace std; 

using std::string;
using std::getline;
using std::regex;

string getInput(string demand)
{
	string inputText = "empty";
	cout << demand;					// Ask for any type of input
	getline(cin, inputText);		// Get user input from the keyboard
	return inputText;
}

bool checkInput(string input)
{
	int temp = 0;
	bool result = false;
	if (regex_match(input, std::regex("[0-9]+")))
	{
		// It is a number, proceed with the sum.
		result = true;
	}
	else
	{
		// It is not a number, error message displayed.
		cout << "It is not a valid number and will not be considered." << endl;
		result = false;
	}
	return result;
}

void sum()
{
	int sum = 0;
	int temp = 0;
	string tmp = "0";

	for (int i = 0; i < 2; i++)
	{
		tmp = getInput("Enter a number to sum: ");

		bool verify = checkInput(tmp);

		if (verify)
		{
			// It is a number, proceed with the sum.
			temp = stoi(tmp);
			sum += temp;
		}
		else
		{
			// It is not a number, error message displayed.
			cout << "It is not a valid number and will not be sum." << endl;
		}
	}
	cout << "Sum: " << sum << endl;
}

void multiply()
{
	int mult = 0;
	int temp = 0;
	string tmp = "0";
	bool first = true;

	for (int i = 0; i < 2; i++)
	{
		tmp = getInput("Enter a number to multiply: ");

		bool verify = checkInput(tmp);

		if (verify)
		{
			// It is a number, proceed with the sum.
			temp = stoi(tmp);
			if(first)
			{
				mult = temp;
				first = !first;
			}
			else
			{
				mult = mult * temp;
			}
		}
		else
		{
			// It is not a number, error message displayed.
			cout << "It is not a valid number and will not be sum." << endl;
		}
	}
	cout << "Result: " << mult << endl;
}


int main()
{
	sum();
	multiply();
	return 0;
}
