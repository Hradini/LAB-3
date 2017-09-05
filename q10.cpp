#include <iostream>
using namespace std;

int main() {
	
	char c, lcv, ucv;
	cout << "enter a character: \n";
	cin >> c ;
	
	lcv = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	ucv = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	
	if ( c == lcv ){
		cout << "it is a lowercase letter \n";
	}
	
	else {
		cout << "it is a uppercase letter";
	}
	
	return 0;
}
