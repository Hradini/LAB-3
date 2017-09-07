#include <iostream>
using namespace std;

int main() {
	float u;
	cout << "enter the number of units \n";
	cin >> u;
	if (u <= 50){
		cout << "your bill is " << u * .5;
	}else if (u > 50 && u <=150){
		cout << "your bill is " << 25 + (u -50)*.75;
	}else if ( u > 150 && u <= 250){
		cout << "your bill is " << 100 + (u - 150)*1.2;
	}else{
		float b,s;
		b = 220 + (u -250)*1.5;
		s = .2*b;
		cout << "your bill is " << s +b;
	}
	
	return 0;
}
