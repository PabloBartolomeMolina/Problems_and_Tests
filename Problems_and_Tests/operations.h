#include <iostream>  
#include <regex>
#include <string>

using namespace std;

using std::string;
using std::getline;
using std::regex;

class Operations {
	int sumRes, temp;
	float result;
	string tmp;

	bool checkInput(string input);
	string getInput(string demand);

public:
	Operations();
	~Operations();
	void sum();
	void multiply();
	void divide();
	void power();
	void exp();
};