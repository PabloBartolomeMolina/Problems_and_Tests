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
	// Create ops object.
	Operations *ops = new Operations();

	// Operations using the object.
	ops->sum();
	ops->multiply();
	ops->divide();
	ops->power();

	// Delete ops object.
	delete ops;
	return 0;
}
