#include <iostream>
using namespace std;

int main() {
	
	char l;
	cout << "enter a character: \n";
	cin >> l ;
	if ( l >= 'a' && l <= 'z' || l >= 'A' && l <= 'Z' ){
		cout << "the character is an alphabet \n";
	}
	else {
		cout << "the character is not an alphabet";
	}
	return 0;
}
