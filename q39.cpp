#include <iostream>
using namespace std;

int main() {
	int num,n1,n2,n3,n4,a = 0;
	cin >> num;
	n1 = num; n2= num;
	while ( n1 >= 10){
		n1 = n1 % 10;
		n2 = n1;
		while ( num != 0){
			num = num / 10;
			n3 = num % 10;
			if (n2 == n3){
				a= a +1;
			}
			
		}
		cout << "the frequency of the digit " << n2 << "is " << a << endl;
		
	}
	
	return 0;
}
