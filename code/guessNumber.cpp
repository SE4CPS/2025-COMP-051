#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // time()
using namespace std;

void printWelcome(){
    cout << "Welcome to the number guessing game :)" << endl;
}
int generateSecret(int min, int max) {
    return rand() % (max - min + 1) + min;
}
int getPlayerGuess() {
    int guess;
    cout << "Please make your guess!" << endl;
    cin >> guess;
    return guess;
}
bool checkGuess(int secret, int guess) {
 if ( guess == secret ) {
     return true;
 }   else {
     return false;
 }
}
void printHint(int secret, int guess) {
    if (guess < secret) {
        cout << "Sorry, Please guess higher" << endl;
    }
    if (guess > secret ) {
        cout << "Sorry, please guess lower" << endl;
    }
}
void printResult(bool isCorrect) {
    if(isCorrect) {
        cout << "Correct, you win!" << endl;
    } else {
        cout << "Incorrect" << endl;
    }
}
bool askPlayAgain() {
    char opinion = 'Y';
    cout << "Do you want to play again? Yes (Y) or No (N)" << endl;
    cin >> opinion;
    if (opinion == 'Y') {
        return true;
    } 
    
    if (opinion == 'N') {
        return false;
    } 
    
    return true;
}
void printGoodbye() {
  cout << "Thanks for playing! Goodbye!" << endl;  
}
void printScore(int score) {
    cout<< "Score is: " << score << endl;
}
int updateScore(int score, bool correct) {
    if(correct){
        score++;
    }
    return score;
}

int main()
{
    printWelcome();
    int score = 0;
    int secret = generateSecret(1,100);
    bool isPlayAgain = true;
    
    while (isPlayAgain) {
        int guess = getPlayerGuess();
        bool isGuessCorrect = checkGuess(secret, guess);
        if (isGuessCorrect == true) {
            printResult(isGuessCorrect);
            score = updateScore(score, isGuessCorrect);
            printScore(score);
            isPlayAgain = askPlayAgain();
            if (isPlayAgain == false) {
                printGoodbye();
                break;
            } else {
                secret = generateSecret(1,100);
            }
        } else {
            printHint(secret, guess);
            isGuessCorrect = checkGuess(secret, guess);
        }
    }
    
    return 0;
}
