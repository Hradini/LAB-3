#include <iostream>
using namespace std;

int main() {
	int num, n,n1,n2,j, i, f=1, sof=0;
	cin >> n2;
	for(j =1;j <=n2;j++){
		n=j;
		num=j;
		sof=0;
		while(num !=0){
			f =1;
			n1 = num%10;
			num = num/10;
			for (i=1; i<=n1;i++){
				f=f*i;
				}
			sof = sof + f;
			}
	
		if ( sof == n){
			cout << n << " is a strong number\n";
		}
		
	}		
	return 0;
}
