#include <iostream>
using namespace std;

int main() {
	float p,c,b,m,cs, per;
	cout << "enter the marks of Physics, Chemistry, Biology, Mathematics and Computer \n";
	cin >> p >>c>>b>>m>>cs;
	per = (p+c+b+m+cs)/5;
	if(per >= 90){
		cout << "your grade is A";
	}else if(per >=80 && per < 90){
		cout << "your grade is B";
	}else if(per >=70 && per < 80){
		cout << "your grade is C";
	}else if(per >=60 && per < 70){
		cout << "your grade is D";
	}else if(per >=40 && per < 60){
		cout << "your grade is E";
	}else {
		cout << "your grade is F";
	}
	
	cout << "\n your percentage is " << per;
	
	return 0;
}
