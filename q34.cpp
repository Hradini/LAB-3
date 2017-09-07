#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1, n2,n3, n, fd, ld, count, power;
	count = 0;
    cout << "Enter a positive integer: \n";
    cin >> n1;
    n = n1; n2 = n1; n3 = n1; 
        ld = n % 10;
        	while (n2 >= 10){
    		n2 = n2/10;
    		++count;
    	    }
    	fd = n2;
        power = pow (10, count);	    
        n1 = n1 - ld +fd;
    n3 = n1 % power;
    n3 = n3 + (power*ld);
    
    cout << "the swapped number is " << n3;
   
    return 0;
}
