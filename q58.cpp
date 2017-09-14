#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int binary =0, i=0, d=0;
	cin >> binary;
	int store = binary;
	for ( i = 7; i >=0; i--){
		
		d = store/pow(10,i);
		if (d==0){
			cout << "1";
		}else if (d==1){
			cout << "0";
			store = store - pow(10,i);
		} 
		
	}
	return 0;
}
