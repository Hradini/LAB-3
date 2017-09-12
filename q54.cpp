#include <iostream>
using namespace std;

int main() {
	
  int n,n1,j,i=1,sum=0;
  cout<<"Enter a number: \n";
  cin >> n1;
  for ( j =3;j < n1; j++){
	sum =0; i=1;
	  while(i<j){
	         if(j%i==0)
	               sum=sum+i;
	              i++;
	  }
	  if(sum==j)
	         cout << j  <<  " is a perfect number \n";
  }
	return 0;
}
