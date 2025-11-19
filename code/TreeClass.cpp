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
};    

int main()
{
	Plant appleTree("Apple","Outdoor","Tree");
	return 0;
}
