#include <iostream>
using namespace std;

int main() {
	int num,pro, n1;
	pro = 1;
	cout << "enter the positive integer: \n";
	cin >> num;
	n1 = num;
	while (n1 != 0){
		n1 = n1 % 10;
		pro = pro * n1;
		num = num /10;
		n1 = num;
		
	}
	
	cout << pro;
	
	return 0;
}
