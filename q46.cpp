#include <iostream>
using namespace std;

int main() {
	int n1, n2, i, lcm=0;
	cout << "enter the two numbers \n";
	cin >> n1 >> n2;
	if ( n2 > n1){
		int temp = n2;
		n2 = n1;
		n1 = temp;
	}
	i = n1;
	do {
		if ( i % n1 == 0 && i % n2 ==0){
		lcm = i;
		cout << "LCM is " << lcm << endl;
		break;
		} else{
			i++;
		}
	} while ( true);		
	 return 0;
}
