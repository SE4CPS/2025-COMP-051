#include <iostream>
using namespace std;

bool isCoffeeHot(double temperature) {
    if (temperature > 60) {
        return true;
    } else {
        return false;
    }
}

string isCoffeeHotToString(double temperature) {
    bool isHot = isCoffeeHot(temperature);
    if (isHot) {
        return "It is too hot!!!";
    } else {
        return "It is too cold!!!";
    }
}

int grindbeans(int grams){
    if (grams<10){
        return 0;
    }
    return grams/10;
}

double brewCoffee(int strengthLevel) {
    if(strengthLevel < 1) {
        strengthLevel = 0;
    }
    switch(strengthLevel) {
        case 0: return 0.0;
        case 1: return 3.0;
        case 2: return 3.5;
        case 3: return 4.0;
        case 4: return 5.0;
        case 5: return 6.0;
        default: return 6.0;
    }
}

void addmilk(double amountmilliliter) {
    if(amountmilliliter < 0) {
        cout << "Invalid amount";
    } else {
        cout << "Added " << amountmilliliter << " ml of milk";
    }
}

int main()
{
    //std::cout<< isCoffeeHotToString(50);
    //std::cout << grindbeans(-35);
    //std::cout << brewCoffee(4);
    addmilk(-10);
    return 0;
}
