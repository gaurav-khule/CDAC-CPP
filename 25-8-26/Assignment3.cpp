#include<iostream>
using namespace std;

main(){
	int age;
	cout << "Enter age: ";
	cin >> age;
	if(age < 18)
	cout << "Minor person";
	if(age > 18 && age < 60)
	cout << "Major person";
	if(age > 60)
	cout << "Senior citizen";
}