#include <iostream>
using namespace std;

int main() {
	int i,n, sum;
	cout <<"enter the last number \n";
	cin >> n;
	i = 1 ;
	
	while ( i <= n){
	 
	sum = sum + i;
	i++;
	}
	cout << sum;
	
	
	return 0;
}
