#include <iostream>
using namespace std;

int main() {
	float cp, sp;
	cout << "enter the cost price and the sale price of the good \n";
	cin >> cp >> sp;
	if (cp > sp){
		cout << "you had a loss of " << cp-sp;
			}
	else{
		cout << "you had a profit of " << sp - cp;
			}
	
	return 0;
}
