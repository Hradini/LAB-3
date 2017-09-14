#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int binaryNumber =0, octalNumber = 0, i = 0, decimalNumber = 0;
	cin >> binaryNumber;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    cout << octalNumber;
    return 0;
} 
