#include <iostream>
using namespace std;

int main() {
	int n, i, n2, n3,j;
  bool isPrime = true;

  cout << "Enter a positive integer: \n";
  cin >> n2;
  n3 = n2;
  for ( j = 2; j<= n2; j++){
  	
	isPrime = true;
	for(i = 2; i <= (j/2); i++){
		if(j % i == 0){
		isPrime = false;
		break;
		}
	}
	if (isPrime){
		while ( n3 % j == 0){
		cout << j << "  ";
		n3 = n3 / j;
		
		}
	
	}
  }
	return 0;
}
