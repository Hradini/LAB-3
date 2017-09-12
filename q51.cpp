#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num, n, n1, d,a = 0, p=0;
	cout << "enter the number \n";
	cin >> num;
	n = num;
	n1 = num;
	while (n1 !=0){
    	n1 = n1/10;
    	++p;
	}
    	
	while (num >= 10){
		d = num % 10;
		a = a + pow(d,p);
		num /= 10;
	}
	a = a+ pow(num, p);
	
	if ( n == a){
		cout << "the number is an armstrong number";
	}else
	cout << "the is not an armstrong number";
	
	return 0;
}
