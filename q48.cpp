#include <iostream>
using namespace std;

int main()
{
  int n, i, n2, j;
  bool isPrime = true;

  cout << "Enter a positive integer: \n";
  cin >> n2;
  for ( j = 1; j<= n2; j++){
	isPrime = true;
	for(i = 2; i <= (j/2); i++){
		if(j % i == 0){
		isPrime = false;
		break;
		}
	}
	if (isPrime){
	cout << j << "  ";
	}
  }

  return 0;
}
