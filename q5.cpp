#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "enter the year: \n";
	cin >> a;
	b = a % 4;
	if ( b == 0) {
		cout << "the year is a leap year";
		} else {
			cout << "the year is not a leap year";	
		}
	
	return 0;
}
