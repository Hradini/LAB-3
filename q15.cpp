#include <iostream>
using namespace std;

int main() {
	double a1,a2,a3 ;
	cout << "enter the 3 sides \n";
	cin >> a1 >> a2 >> a3;
	 if ( a1+a2>=a3 && a1+a3>=a2 && a2+a3>= a1 && a1>0 && a2>0 && a3>0){
	 	cout << "it is a triangle \n";
	 }
	else {
		cout << "it is not a triangle \n";
	}
	return 0;
}
