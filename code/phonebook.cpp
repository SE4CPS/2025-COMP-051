#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Contact {
public:
	string number;
	string email;
	string name;

	string getSummary() {
		return name + " ::  " + email + " ::  " + number;
	}
};

int main()
{

	bool isDone = false;
	ofstream outFile("phonebook.txt");
	while (isDone == false) {

		std::cout << "Enter number, email, and name" << std::endl;

		Contact c;
		std::cin >> c.number >> c.email >> c.name;
		outFile << c.getSummary() << endl;

		std::cout << "Contact saved!" << std::endl;
		
		std::cout << "Do you wish exit the phonebook? [0,1]" << std::endl;
		std::cin >> isDone;
	}

	outFile.close();
	return 0;
}
