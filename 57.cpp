#include <iostream>
using namespace std;

int main() {
	int n1 =0,n2=0,n3=1,i=1, count=0;
	cin >> count;
	while(i <= count){
		cout << n3 << " ";
		n1=n2; n2=n3;
		n3= n2+n1;
		i++;
	} 

	return 0;
}
