#include <iostream>
using namespace std;

int main() {
	int num, pro;
	pro = 1;
	cout << "enter the positive integer: \n";
	
	cin >> num;
	
	
	while (num != 0){
		
		pro = pro * num;
		
		num--;
	
	}
	
	cout << pro;
	
	return 0;
}
