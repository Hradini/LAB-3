#include <iostream>
using namespace std;

int main() {
	float bs;
	cout << "enter your basic salary\n";
	cin >> bs;
	if (bs<= 10000){
		cout << "your gross salary is" << bs + .2*bs + .8*bs ;
	} else if (bs >10000 && bs <= 20000){
		cout << "your gross salary is " << bs + .25*bs + .9*bs;
	} else{
		cout <<"your gross salary is " << bs + .3*bs + .95*bs;
	}
	
	return 0;
}
