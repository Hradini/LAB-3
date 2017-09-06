#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "please enter a month number: "<< endl;
	cin >> a;
	if (a == 2){
         cout << "28 days" << endl; 
	}
         else if ( a == 1 || 3 || 5 || 7 ||8 || 10 ||12){
         
         cout << "31 days" << endl; 
         }
         else {
         cout << "30 days" << endl; 
         }
         
         
	
         
	
	return 0;
}
