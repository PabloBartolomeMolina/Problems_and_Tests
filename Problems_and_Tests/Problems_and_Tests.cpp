// Problems_and_Tests.cpp : définit le point d'entrée de l'application.
//

#include "Problems_and_Tests.h"

#include <ctime>
#include <chrono>
#include <iostream>  
#include <regex>
#include <string>

#include "operations.h"
#include "strings.h"

using namespace std; 

using std::string;
using std::getline;



/* Function to tests the implementation of the Class Operations.
 * Needs to be called from main(). */
void operations()
{
	// Create ops object.
	Operations* ops = new Operations();

	// Operations using the object. Testing purposes.
	/*ops->sum();
	ops->multiply();
	ops->divide();
	ops->power();*/
	ops->exp();

	// Delete ops object.
	delete ops;
}


void strings()
{
	/* Several dummy strings just for testing. */
	bool ok = checkFile("D:/SensorFusion.rar");
	cout << ok << endl;

	ok = checkFile("D:/Hello/My/Friend/Bye/strings.h");
	cout << ok << endl;
	
	ok = checkFile("C:/Just/Another/Try/String/strings.doc");
	cout << ok << endl;

	ok = checkFile("H:/Hello/There/General/Kenobi/strings.docx");
	cout << ok << endl;
}


/* Function to measure the time of some tasks. */
void time()
{
	clock_t start = clock();
	
	operations();

	clock_t end = clock();

	double diff = ((double)end - (double)start) / (double)(CLOCKS_PER_SEC / 1000);

	// your test
	cout << "Time: " << diff << " ms" << endl;

}

int main()
{
	strings();
	
	return 0;
}
