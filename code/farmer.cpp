#include <iostream>
using namespace std;

class Farmer {
public:
                int coin;
                string name;
};

void initFarmer(Farmer& farmer, const string& name) {
                farmer.name=name;
                farmer.coin=0;
}

void printCropMenu() {
    cout << "[0]Wheat, 1 coin\n[1]Corn, 2 coins\n[2]Cows, 4 coins\n";
}

int readCropChoice(const string& playerName) {
    int userChoice;
    cout << playerName << " Please enter your choice: " << endl;
    
    cin >> userChoice;
    if (userChoice >= 3 || userChoice <= -1) {
        userChoice = 0;
    }
    cout << playerName << " Entered the value: " << userChoice << endl;
    return userChoice;
}

int cropReward(int cropChoice) {
    switch(cropChoice) {
        case 0: return 2;
        case 1: return 3;
        case 2: return 4;
    }
    return 0; //something default
}

void printFinalResult(const Farmer& p1, const Farmer& p2) {
    cout<<p1.name<<" has "<<p1.coin<<" coins. \n"<<p2.name<<" has "<<p2.coin<<" coins."<<endl;
    if(p1.coin>p2.coin){
        cout<<p1.name<<" has more coins and wins!";
    }else{
        cout<<p2.name<<" has more coins and wins!";
    }
}

int main()
{
                Farmer alice;
                Farmer bob;
                initFarmer(alice,"Alice");
                initFarmer(bob,"Bob");
    printCropMenu();
    alice.coin = cropReward(readCropChoice(alice.name));
    bob.coin = cropReward(readCropChoice(bob.name));
    printFinalResult(alice,bob);
                return 0;
}
