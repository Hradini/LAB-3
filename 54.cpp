#include <iostream>
using namespace std;

int main() {
	int num, n,n1, i, f=1, sof=0;
	cin >> num;
	n=num;
	while(num !=0){
		f =1;
		n1 = num%10;
		num = num/10;
		for (i=1; i<=n1;i++){
			f=f*i;
			}
			
		sof = sof + f;
		
	}
	cout << sof << endl;
	if ( sof == n){
		cout << "it is a strong number";
	}
	return 0;
}
