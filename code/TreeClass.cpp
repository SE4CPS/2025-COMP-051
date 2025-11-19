#include <iostream>
#include <string>
using namespace std;

class Plant {

    private:
    	string name;
    	string status;
    	string type;
    
    public:
        Plant(string n, string s, string t) {
            name = n;
            status = s;
            type = t;
        }
        
        void print() {
            cout << "Name: " << name << endl;
            cout << "Status: " << status << endl;
            cout << "Type: " << type << endl;
        }
};    

int main()
{
	Plant appleTree("Apple","Outdoor","Tree");
	Plant orangeTree("Orange","Outdoor","Tree");

	appleTree.print();
	orangeTree.print();
	return 0;
}
