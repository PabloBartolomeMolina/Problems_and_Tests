// Problems_and_Tests.cpp : définit le point d'entrée de l'application.
//

#include "Problems_and_Tests.h"

#include <string>
#include <regex>

using std::string;
using std::getline;
using std::regex;

using namespace std;

string getInput(string demand)
{
	string inputText = "empty";
	cout << demand;					// Ask for any type of input
	getline(cin, inputText);		// Get user input from the keyboard
	return inputText;
}

void sum()
{
	int sum = 0;
	int temp = 0;
	string tmp = "0";

	for (int i = 0; i < 2; i++)
	{
		tmp = getInput("Enter a number to sum: ");
		if (regex_match(tmp, std::regex("[0-9]+")))
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


int main()
{
	sum();

	return 0;
}
