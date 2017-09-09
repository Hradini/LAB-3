#include <iostream>
using namespace std;

int main() {
	int n1, n2, i, hcf=0;
	cout << "enter the two numbers \n";
	cin >> n1 >> n2;
	if ( n2 > n1){
		int temp = n2;
		n2 = n1;
		n1 = temp;
	}
	for (i = 1 ; i <= n2; i++){
		if ( n2 % i == 0){
			hcf = i;
		}
	}
	cout << "HCF is " << hcf << endl;
	
	return 0;
}
