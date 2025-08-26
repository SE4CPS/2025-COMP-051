#include <iostream>
using namespace std;

int main() {
    double num1 = 5, num2 = 3;
    char op = '+';

    cout << "Simple Calculator\n";
    cout << "First number: " << num1 << endl;
    cout << "Operator: " << op << endl;
    cout << "Second number: " << num2 << endl;

    switch (op) {
        case '+': cout << "Result = " << num1 + num2 << endl; break;
        case '-': cout << "Result = " << num1 - num2 << endl; break;
        case '*': cout << "Result = " << num1 * num2 << endl; break;
        case '/': cout << "Result = " << num1 / num2 << endl; break;
    }
    return 0;
}
