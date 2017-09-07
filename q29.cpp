#include <iostream>
using namespace std;

int main() {
	int i, n, sum;
	cout << "enter the last number \n";
	cin >> n;
	
	i = 1 ;
	while ( i <= n){
	if ( i % 2 != 0){ 
	sum = sum +i;
	}
	i++;
	}
	cout << sum;
	
	
	
	return 0;
}
