#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Contact {
public:
	string number;
	string email;
	string firstname;
	string lastname;

	string getSummary() {
		return firstname + " " + lastname + " ::  " + email + " ::  " + number;
	}
};

int main()
{

	ifstream inFile("hello.txt");
	string line;
	while (getline(inFile, line)) {
		cout << line << endl;
	}
	inFile.close();

	/*
	bool isDone = false;
	ofstream outFile("phonebook.txt", ios::app);
	while (isDone == false) {

		std::cout << "Enter number, email, first and last name" << std::endl;

		Contact c;
		std::cin >> c.number >> c.email >> c.firstname >> c.lastname;
		outFile << c.getSummary() << endl;

		std::cout << "Contact saved!" << std::endl;

		std::cout << "Do you wish exit the phonebook? [0,1]" << std::endl;
		std::cin >> isDone;
	}

	outFile.close();
	*/

	return 0;
}
