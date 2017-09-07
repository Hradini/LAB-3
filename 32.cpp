#include <iostream>
using namespace std;

int main()
{
    int n, fd, ld;

    cout << "Enter a positive integer: \n";
    cin >> n;
    ld = n % 10;
    
    while (n >= 10){
    	n = n/10;
    	    }
    fd = n;
    cout << "the first digit is " << fd;
    cout << "\nthe last digit is " << ld;
    
    return 0;
}
