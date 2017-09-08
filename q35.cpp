#include <iostream>
using namespace std;

int main() {
	int num,sum, n1;
	sum = 0;
	cout << "enter the positive integer: \n";
	cin >> num;
	n1 = num;
	while (n1 != 0){
		n1 = n1 % 10;
		sum = sum + n1;
		num = num /10;
		n1 = num;
		
	}
	
	cout << sum;
	
	return 0;
}
