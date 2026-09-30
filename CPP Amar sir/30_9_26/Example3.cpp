#include<iostream>
using namespace std;

main(){
	// .width()
	cout << "Width Example";
	cout.width(10);
	cout << "NAME";
	cout.width(20);
	cout << "Contact Number";
	cout <<"\n";
	cout <<"\n";
	
	// .fill()
	cout << "fill Example";
	
	cout.fill('*');
	cout.width(10);
	cout << "NAME";
	cout.width(20);
	cout << "Contact Number";
	cout << "\n";
	
	// .precision()
	cout << "\n\n";
	float a = 785.658945f;
	cout.precision(3);
	cout << "Result: " << a;
}