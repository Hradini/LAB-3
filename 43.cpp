#include <iostream>
using namespace std;

int main() {
	int num, pro,a;
	
	cout << "enter the positive integer: \n";
	
	cin >> num;
	cout << " the factors are ";
	for (a= 1; a<= num; a++){
		if (num % a == 0){
			cout << a << " ";
		}
	}
	
	return 0;
}
