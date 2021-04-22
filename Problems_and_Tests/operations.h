#include <iostream>  
#include <regex>
#include <string>

using namespace std;

using std::string;
using std::getline;
using std::regex;

class Operations {
	int sum, temp;
	float result;
	string tmp;

	bool checkInput(string input);
	string getInput(string demand);

public:
	Operations() {
		cout << "Class constructor called" << endl;
	}
	~Operations() {
		cout << "Class destructor called" << endl;
	}
	void sum();
	void multiply();
	void divide();
};