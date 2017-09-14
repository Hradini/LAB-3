#include <iostream>
using namespace std;

int main() {
	int num,d=0, x=0;
	cin >> num;
	while (num!=0){
		x = 10*x + num %10;
		num /= 10;
	}
	num = x;
	cout <<x;
	while ( num !=0){
		d = num %10;
		num /= 10;
		switch (d){
			case 0 :
			cout << "zero ";
			break;
			case 1 :
			cout << "one ";
			break;
			case 2 :
			cout << "two ";
			break;
			case 3 :
			cout << "three ";
			break;
			case 4 :
			cout << "four ";
			break;
			case 5 :
			cout << "five ";
			break;
			case 6 :
			cout << "six ";
			break;
			case 7 :
			cout << "seven ";
			break;
			case 8 :
			cout << "eight ";
			break;
			case 9 :
			cout << "nine ";
			break;
			
		}
	}
	return 0;
}
