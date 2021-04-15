// Problems_and_Tests.cpp : définit le point d'entrée de l'application.
//

#include "Problems_and_Tests.h"

#include <string>
using std::string;
using std::getline;

using namespace std;

string getInput()
{
	string inputText = "empty";
	cout << "Type some words: ";	// Ask for any type of inout
	getline(cin, inputText);		// Get user input from the keyboard
	return inputText;
}


int main()
{
	cout << getInput() << endl;
	return 0;
}
