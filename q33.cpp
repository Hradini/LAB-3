#include <iostream>
using namespace std;

int main()
{
    int n, fd, ld, sum;

    cout << "Enter a positive integer: \n";
    cin >> n;
    ld = n % 10;
    
    while (n >= 10){
    	n = n/10;
    	    }
    fd = n;
    cout << "the first digit is " << fd;
    cout << "\nthe last digit is " << ld;
    sum = fd + ld;
    cout << "\nthe sum is " << sum;
    return 0;
}
