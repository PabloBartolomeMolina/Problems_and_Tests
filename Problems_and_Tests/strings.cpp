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
		cout << "File " << input << " not really accessible for this program." << endl;

	return result;
}