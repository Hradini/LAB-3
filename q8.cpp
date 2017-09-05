#include <iostream>
using namespace std;

int main() {
	
	char l;
	cout << "enter a character: \n";
	cin >> l ;
	if ( l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u'  || l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U' ){
		cout << "the character is a vowel \n";
	}
	else {
		cout << "the character is a consonant";
	}
	return 0;
}
