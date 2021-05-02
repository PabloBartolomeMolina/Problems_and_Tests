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
	char ch = '0';		// Dummy initialization
	char ch_pr = '0';	// Dummy initialization
	int word = 1;

	// Check if file exists.
	if (file) {
		file.seekg(0, ios::beg); //bring position of file pointer to begining of file

		while (file)
		{
			file.get(ch);
			/*if ((ch == '\s' || ch == '\n') && (ch_pr == '\s'))
				word++;*/
			
			if ((iscntrl(ch) || isspace(ch)) && (!iscntrl(ch_pr)) && (!isspace(ch_pr)))
				word++;
			ch_pr = ch;
		}
		return word;
	}
	else {
		cout << "File doesn't exist" << endl;
		return -1;
	}
}