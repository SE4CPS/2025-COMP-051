#include <iostream>
using namespace std;

string checkEvenOdd(int n) {
	if((n%2)==0) {
		return "Even";
	} else {
		return "Odd";
	}
}
int sumNWhileLoop(int n) {
	int result = 0;
	while(n > 0) {
		result += n;
		n--;
	}
	return result;
}
int sumNForLoop() {
	int n;
	int result;
	cin >> n;
	for(int i = 0; i <= n; i++) {
		result += i;
	}
	cout << result;
	return result;
}
int findmax(int a, int b) {
	int result = 0;
	if(a > b) {
		result = a;
	} else {
		result = b;
	}
	return result;
}
int findmax2(int a, int b) {
	return a>b?a:b; // ternary operator cond?true:false
}
int factorialWhile(int a) {
	int result = 1;
	while (a > 1) {
		result = result*a;
		a = a-1;
	}
	return result;
}
int factorialFor(int a ) {
	int result = 1;
	for (a; a >= 1; a--) {
		result = result * a;
	}
	return result;
}
string guessGame(int secret, int guess) {
	return (guess == secret) ? "Correct!" : "Try again";
}
string weatherMsgTernary(int n) {
	return  (n>=1&&n<=19) ? "Cold" :
	        (n>=20&&n<=29) ? "Warm" : "Hot";
}
void IfElseWeather(int n) {
	if (n < 19) {
		cout << "cold";
	} else if (n < 30) {
		cout << "warm";
	} else {
		cout << "hot";
	}
}
void weatherMsg(int n) {
    if (n != 20 && n!=30 && n!= 31) throw runtime_error("Only 20, 30, 31 allowed");
	switch(n) {
	case 20:
		cout << "Cold";
		break;
	case 30:
		cout << "Warm";
		break;
	case 31:
		cout << "Hot";
	}
}
void countDown(int a) {
	if (a < 0) throw runtime_error("Function only requires values >= 0");
	for (a; a >= 0; a--) {
		cout << a << endl;
	}
}

int main()
{
	try {
		weatherMsg(21);
	} catch(runtime_error &e) {
		cout << e.what();
	}
	return 0;
}




