#include <iostream>
using namespace std;

int main() {
	double a, b, c;
	cout << "enter the three numbers: \n";
	cin >> a >> b >> c;
	if ( a > b) {
		cout << "the greater number is " << max (a,c);
		} else {
			cout << "the greater number is " << max (b,c);
			
	}
	
		return 0;
}
