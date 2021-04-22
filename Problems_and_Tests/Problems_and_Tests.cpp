// Problems_and_Tests.cpp : définit le point d'entrée de l'application.
//

#include "Problems_and_Tests.h"

#include <string>
#include <regex>

#include "operations.h"

using namespace std; 

using std::string;
using std::getline;
using std::regex;

int main()
{
	Operations *ops = new Operations();
	delete ops;
	return 0;
}
