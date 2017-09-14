#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int binary, decimalNumber,i =0,j=0,d=0, count=0;
	cin >> binary;
	int store = binary;
	 while (store !=0){
    	store = store/10;
    	++count;
    	
	for ( i=0; i <=(count/4)+1 ; i++){
		d = store % 10000;
			
				while(d != 0)
			    {
			        decimalNumber += (d%10) * pow(2,i);
			        ++j;
			        d/=10;
			    } j=1;
					switch(decimalNumber){
						case 10 :
						decimalNumber = 'A';
						break;
						case 11 :
						decimalNumber = 'B';
						break;
						case 12 :
						decimalNumber = 'C';
						break;
						case 13 :
						decimalNumber = 'D';
						break;
						case 14 :
						decimalNumber = 'E';
						break;
						case 15 :
						decimalNumber = 'F';
						break;
					} cout << decimalNumber;
				
				decimalNumber=0;
				
				
		  store = store / 10000;
	}
	return 0;
	}
}
