#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int binaryNumber, decimalNumber = 0, i = 0;
	cin >> binaryNumber;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    } i=1;
	cout << decimalNumber;
	return 0;
}
