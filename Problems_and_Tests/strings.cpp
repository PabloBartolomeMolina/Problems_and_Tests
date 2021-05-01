#include "strings.h"


bool checkFile(string input)
{
	// regex expression for pattern to be searched 
	regex regexp("(.*)(rar)");

	if (regex_match(input, regexp))
		cout << "string:object => matched\n";

	return true;
}