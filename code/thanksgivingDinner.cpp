#include <iostream>
#include <vector>
#include <limits>
using namespace std;

void printWelcome() {
	cout << endl;
	cout << "  **********************************" << endl;
	cout << "  *                                *" << endl;
	cout << "  * Welcome to Thanksgiving Dinner *" << endl;
	cout << "  *                                *" << endl;
	cout << "  **********************************" << endl;
	cout << endl;
}

string askHostName() {
	string hostFirstName;
	string hostLastName;
	cout << endl;
	cout << "  What is the host name? ";
	cin >> hostFirstName >> hostLastName;
	cout << "  Thank you for hosting the dinner, " << hostFirstName << hostLastName << endl;
	return hostFirstName + " " + hostLastName;
}

int askGuestCount() {
	int guestCount;
	cout << endl;
	cout << "  How many guests will come? ";
	cin >> guestCount;
	if (guestCount < 1 || guestCount > 20) {
		guestCount = 4;
		cout << "  Thank you, the value is invalid, " << guestCount << " guests are registered." << endl;
	} else {
		cout << "  Thank you, " << guestCount << " guests are registered." << endl;
	}
	return guestCount;
}

int askDishCount() {
	int dishCount;
	cout << endl;
	cout << "  How many dishes should be prepare for you? ";
	cin >> dishCount;
	if (dishCount < 1 || dishCount > 15) {
		dishCount = 5;
		cout << "  Thank you, the value is invalid, " << dishCount << " dishes will be prepared." << endl;
	} else {
		cout << "  Thank you, " << dishCount << " dishes will be prepared." << endl;
	}
	return dishCount;
}

string askDishName(int index) {
	string dishName = "Dish";
	cout << endl;
	cout << "  What dish would you like? ";
	getline(cin, dishName);
	if  (dishName.empty() || dishName == " ") {
		dishName = "Dish 1";
		cout << "  Thank you, the value is invalid, " << dishName << " will be prepared." << endl;
	} else {
		cout << "  Thank you, " << dishName << " will be prepared." << endl;
	}
	return dishName;
}

vector<string> collectDishes(int count) {
    vector<string> dishes;
    for (int i = 0; i <= count; ++i) {
        string dish = askDishName(i);
        dishes.push_back(dish);
    }
    return dishes;
}

void printMenu(const vector<string>& dishes) {
    cout << "Number of dishes: " << dishes.size() << endl;
    for (string dish: dishes) {
        cout << dish << endl;
    }
}


/*
Guest * 1.5
Estimates turkey amount needed. Uses pounds per guest rule. Returns the total pounds.
*/
double estimateTurkeySize(int guestCount) {
    cout << "estimated turkeySize" << guestCount*1.5 << " pounds" << endl;
    return guestCount*1.5;
}


int main()
{
	printWelcome();
	askHostName();
	int guestCount = askGuestCount();
	askDishCount();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	vector<string> dishesVector = collectDishes(2);
	printMenu(dishesVector);
	estimateTurkeySize(guestCount);
	return 0;
}
