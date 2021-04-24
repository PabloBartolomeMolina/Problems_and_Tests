#include <iostream>  
#include <regex>
#include <string>

#include "operations.h"

using namespace std;

using std::string;
using std::getline;
using std::regex;


/* Constructor */
Operations::Operations() {
	sumRes = 0;
	temp = 0;
	result = 0.0;
	tmp = "empty";
	cout << "Class constructor called" << endl;
}


/* Destructor */
Operations::~Operations() {
	cout << "Class destructor called" << endl;
}


/* chekInput method */
bool Operations::checkInput(string input)
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


/* getInput method*/
string Operations::getInput(string demand)
{
	string inputText = "empty";
	cout << demand;					// Ask for any type of input
	getline(cin, inputText);		// Get user input from the keyboard
	return inputText;
}


/* sum method */
void Operations::sum()
{
	int sum = 0;
	int temp = 0;
	string tmp = "0";

	int n = stoi(getInput("How many numbers to sum up ? "));

	for (int i = 0; i < n; i++)
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


/* multiply method */
void Operations::multiply()
{
	int mult = 0;
	int temp = 0;
	string tmp = "0";
	bool first = true;

	int n = stoi(getInput("How many numbers to multiply ? "));

	for (int i = 0; i < n; i++)
	{
		tmp = getInput("Enter a number to multiply: ");

		bool verify = checkInput(tmp);

		if (verify)
		{
			// It is a number, proceed with the sum.
			temp = stoi(tmp);
			if (first)
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
			cout << "It is not a valid number and will not be tqken into account." << endl;
		}
	}
	cout << "Result: " << mult << endl;
}


/* divide method */
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


/* power method */
void Operations::power()
{
	int base = 0;
	int exp = 0;
	int result = 1;
	string tmp = "0";

	// Base of the operation.
	tmp = getInput("Enter the base number: ");
	bool verify = checkInput(tmp);

	while (!verify)
	{
		tmp = getInput("Enter the base number: ");
		verify = checkInput(tmp);
	}
	if (verify)
	{
		base = stoi(tmp);
	}
	else
	{
		/* NOPE */
	}

	// Exponent of the operation.
	tmp = getInput("Enter the exponent number: ");
	verify = checkInput(tmp);

	while (!verify)
	{
		tmp = getInput("Enter the exponent number: ");
		verify = checkInput(tmp);
	}
	if (verify)
	{
		exp = stoi(tmp);
	}
	else
	{
		/* NOPE */
	}

	for (int i = 1; i < exp; i++)
	{
		if (i == 1)
		{
			result = base * base;
		}
		else
		{
			result = result * base;
		}
	}
	
	cout << "Result: " << result << endl;
}