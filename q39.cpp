#include <iostream>
using namespace std;

int main() {
	int num,n1,n2, n3,a = 0;
	cin >> num;
	n2=num;
	for (n1 = 0; n1<=9; n1++){
		a = 0;
		n2 = num;
		while (n2 >0){
			n3 = n2 % 10;
			n2 = n2 / 10;
			if ( n3 == n1){
				a++;
			}
			
		}
		cout << "the frequency of the digit " << n1 << " is " << a << endl;
	}
	
}
