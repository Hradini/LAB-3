#include <iostream>
using namespace std;

int main() {
	int n1 =0,n2=1,n3, count=0;
	cin >> count;
	cout << n1 << " " << n2 << " ";
	
	while(n3 <= count){
		n1=n2; n2=n3;
		n3= n2+n1;
		cout << n3 << " ";
	} 

	return 0;
}
