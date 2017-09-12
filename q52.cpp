#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num, n2, n, n1, i,d,a = 0, p=0;
	cout << "enter the number \n";
	cin >> n2;
	for( i= 1; i <=n2; i++){
		a =0;
		p=0;
		n = i;
		n1 = i;
		while (n1 !=0){
	    	n1 = n1/10;
	    	++p;
		}
		while (n !=0){
			d = n % 10;
			a = a + pow(d,p);
			n /= 10;
		}
		if ( i == a){
			cout << i << endl;
		}
	}
	return 0;
}
