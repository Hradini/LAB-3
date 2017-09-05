#include <iostream>
using namespace std;

int main() {
	
	char l;
	cout << "enter a character: \n";
	cin >> l ;
	if ( l >= 'a' && l <= 'z' || l >= 'A' && l <= 'Z' ){
		cout << "the character is an alphabet \n";
	}
	else if (l >= '0' && l <= '9'){
		cout << "the character is digit";
	}
	else {
		cout << "the character is a special character";
	}
	
	return 0;
}
