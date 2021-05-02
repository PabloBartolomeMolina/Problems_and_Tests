// Problems_and_Tests.cpp : définit le point d'entrée de l'application.
//

#include "Problems_and_Tests.h"

#include <ctime>
#include <chrono>
#include <fstream>
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
	ops->sum();
	ops->multiply();
	ops->divide();
	ops->power();
	ops->exp();

	// Delete ops object.
	delete ops;
}


/* Count words in files if they exist. */
void wordCounting()
{
	int words = 0;
	/* Several dummy strings just for testing. */
	bool ok = checkFile("D:/SensorFusion.rar");
	if (ok)
	{
		words = countWords("D:/SensorFusion.rar");
		if (words == -1)
			cout << endl;
		else
			cout << "Number of words in the document: " << words << "." << endl << endl;
	}
	words = 0;

	ok = checkFile("D:/Cpp_Projects/Problems_and_Tests/Problems_and_Tests/Problems_and_Tests/strings.h");
	if (ok)
	{
		words = countWords("D:/Cpp_Projects/Problems_and_Tests/Problems_and_Tests/Problems_and_Tests/strings.h");
		if (words == -1)
			cout << endl;
		else
			cout << "Number of words in the document: " << words << "." << endl << endl;
	}
	words = 0;
	
	ok = checkFile("D:/DELF_B2/Patata.doc");
	if (ok)
	{
		words = countWords("D:/DELF_B2/¨Patata.doc");
		if (words == -1)
			cout << endl;
		else
			cout << "Number of words in the document: " << words << "." << endl << endl;
	}
	words = 0;

	ok = checkFile("D:/DELF_B2/Escritos.docx");
	if (ok)
	{
		words = countWords("D:/DELF_B2/Escritos.docx");
		if (words == -1)
			cout << endl;
		else
			cout << "Number of words in the document: " << words << "." << endl << endl;
	}
	words = 0;
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
	wordCounting();
	
	return 0;
}
