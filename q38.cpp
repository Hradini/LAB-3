#include <iostream>
using namespace std;

int main(){
    
    int n, num, reversedNum = 0, rem;

    cout << "Enter an integer: \n";
    cin >> n;
    num = n;
    while(n != 0)
    {
        rem = n%10;
        reversedNum = reversedNum*10 + rem;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNum << endl;
    
    if ( num == reversedNum){
    	cout << "the number is a palindrome \n";
        }
    else {
    	cout << "the number is not a palindrome\n";
    }

    return 0;
}
