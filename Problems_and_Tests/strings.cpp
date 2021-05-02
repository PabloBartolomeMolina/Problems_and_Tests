#include "strings.h"


bool checkFile(string input)
{
	bool result = false;

	if (regex_match(input, regex("(.*)(txt|doc|docx|cpp|c|h|py)")))
	{
		cout << "File " << input << " can be read." << endl;
		result = true;
	}
	else
		cout << "File " << input << " not really accessible for this program." << endl << endl;

	return result;
}

int countWords(string path)
{
	ifstream file;
	file.open(path);
	char ch = '0';		// Dummy initialization for current char.
	char ch_pr = '0';	// Dummy initialization for previous char.
	int word = 1;		// To consider first word.

	// Check if file exists.
	if (file) {
		// Bring position of file pointer to begining of file.
		file.seekg(0, ios::beg);

		while (file)
		{
			file.get(ch);
			// Add one word if current char is a white space or an end of line and the previous one was not.
			if ((iscntrl(ch) || isspace(ch)) && (!iscntrl(ch_pr)) && (!isspace(ch_pr)))
				word++;
			ch_pr = ch;	// Get current char to the previous one before go to the next one.
		}
		return word;
	}
	else {
		// File not existing, return a negative number to indicate so.
		cout << "File doesn't exist." << endl;
		return -1;
	}
}