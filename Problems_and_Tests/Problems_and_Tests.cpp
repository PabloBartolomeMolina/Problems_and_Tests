// Problems_and_Tests.cpp : définit le point d'entrée de l'application.
//

#include "Problems_and_Tests.h"

#include <iostream>  
#include <string>
#include <regex>

#include "operations.h"

using namespace std; 

using std::string;
using std::getline;
using std::regex;



/* Function to tests the implementation of the Class Operations.
 * Needs to be called from main(). */
void operations()
{
	// Create ops object.
	Operations* ops = new Operations();

	// Operations using the object. Testing purposes.
	/*ops->sum();
	ops->multiply();
	ops->divide();*/
	ops->power();

	// Delete ops object.
	delete ops;
}

#include <ctime>
#include <chrono>
#include <iostream>

void time()
{
	std::clock_t    start;

	start = clock();
	
	operations();

	// your test
	cout << "Time: " << (clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << endl;

}

int main()
{
	time();
	
	return 0;
}
