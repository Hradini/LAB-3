#include <iostream>
using namespace std;

int main()
{
    int n, count;

    cout << "Enter a positive integer: \n";
    cin >> n;

    while (n !=0){
    	n = n/10;
    	++count;
    }
    
    cout << "the number of digits is " << count;
    return 0;
}
