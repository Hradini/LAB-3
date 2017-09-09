#include <iostream>
using namespace std;

int main() {
	int num, pro, n1, a;
	pro = 1;
	cout << "enter the positive integer: \n";
	cout << "enter the power to raise it to \n";
	cin >> num;
	cin >> n1;
	
	while (a < n1){
		
		pro = pro * num;
		a++;
	
	}
	
	cout << pro;
	
	return 0;
}
