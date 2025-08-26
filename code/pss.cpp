#include <iostream>
#include <cstdlib> // For generating random numbers
#include <ctime>   // For seeding random number generator

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Variables
    int userChoice, computerChoice;
    string choices[3] = {"Stone", "Paper", "Scissors"};

    // Display game instructions
    cout << "Welcome to Stone, Paper, Scissors!" << endl;
    cout << "Please choose:" << endl;
    cout << "1. Stone" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Enter the number of your choice: ";
    cin >> userChoice;

    // Ensure user input is valid
    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice, please run the program again." << endl;
        return 0; // Exit the program if invalid input
    }

    // Generate a random choice for the computer (1-3)
    computerChoice = rand() % 3 + 1; // Random number between 1 and 3

    // Show choices made by both the player and the computer
    cout << "\nYou chose: " << choices[userChoice - 1] << endl;
    cout << "Computer chose: " << choices[computerChoice - 1] << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    }
    else if ((userChoice == 1 && computerChoice == 3) || 
             (userChoice == 2 && computerChoice == 1) || 
             (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!" << endl;
    }
    else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}
