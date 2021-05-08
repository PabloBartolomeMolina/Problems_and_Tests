#include "strings.h"

/* Check the type of the file. */
bool checkFile(string input)
{
	bool result = false;

	// Check if filetype is readeable by the system or not.
	if (regex_match(input, regex(".*\\.(txt$|cpp$|c$|h$|py$)")))
	{
		cout << "File " << input << " can be read." << endl;
		result = true;
	}
	else
		cout << "File " << input << " not really accessible for this program." << endl << endl;

	return result;
}

/* Check number of words in the file. */
int countWords(string path)
{
	ifstream file;
	file.open(path);
	char ch = ' ';		// Dummy initialization for current char.
	char ch_pr = ' ';	// Dummy initialization for previous char.
	int word = 0;		// To consider first word.
	string str = "";

	// Check if file exists. If so, count the words.
	if (file) {
		// Bring position of file pointer to begining of file.
		file.seekg(0, ios::beg);

		while (file)
		{
			file.get(ch);
			// Add one word if current char is a white space or an end of line and the previous one was not.
			if ((iscntrl(ch) || isspace(ch) || ispunct(ch)) && (!iscntrl(ch_pr)) && (!isspace(ch_pr)) && (!ispunct(ch_pr)))
				word++;
			ch_pr = ch;	// Get current char to the previous one before go to the next one.
			
			/* Keep just the letters. */
			if ((!iscntrl(ch) && !isspace(ch) && !ispunct(ch)))
				str.push_back(ch);
		}

		countLetters(str);

		return word;
	}
	else {
		// File not existing, return a negative number to indicate so.
		cout << "File doesn't exist." << endl;
		return -1;
	}
}

/* Count letter repetitions on the string. */
void countLetters(string input)
{
	string letters = "abcdefghijklmnopqrstuvwxyz";	// Base for comparisons.
	int occurrence = 0;		// Intermediate variable to allocate occurence of each letter.
	int count[26] = { 0 };	// Array to store all occurrences.

	// Spacing strings for formatting of output
	string sSpace = " //   ";
	string dSpace = "  //   ";
	string tSpace = "   //   ";

	transform(input.begin(), input.end(), input.begin(), tolower);	// Convert string to lower case.

	for (int i = 0; i < letters.length(); i++)
	{
		for (int ii = 0; ii < input.length(); ii++)
		{
			if (letters.at(i) == input.at(ii))
				occurrence++;
		}
		count[i] = occurrence;
		occurrence = 0;
	}

	// Print results.
	cout << endl << endl;
	cout << "Counting the letters results are : " << endl;
	for (int i = 0; i < letters.length(); i++)
	{
		// Lines of only two letters to improve readability.
		if (i%2==1)
			cout << letters.at(i) << " -- " << to_string(count[i]) << endl;
		else
		{
			// Manage spaces in the lines to give a table-like format with uniform columns.
			if (count[i] >= 10 &&count[i] < 100)
				cout << letters.at(i) << " -- " << to_string(count[i]) << dSpace;
			else if (count[i] >= 100)
				cout << letters.at(i) << " -- " << to_string(count[i]) << sSpace;
			else if (count[i] < 10)
				cout << letters.at(i) << " -- " << to_string(count[i]) << tSpace;
		}	
	}
	cout << endl << endl;
}