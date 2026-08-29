#include<iostream>
using namespace std;

main(){
	string name;
	int rollno;
	float english, math, science,total,percentage;
	
	cout << "Enter student name: ";
	cin >> name;
	
	cout << "Enter roll no: ";
	cin >> rollno;
	
	cout << "Enter english marks: ";
	cin >> english;
	
	cout << "Enter math marks: ";
	cin >> math;
	
	cout << "Enter science marks: ";
	cin >> science;
	
	total = english + math + science;
	percentage = total / 3;
	
	if(percentage >= 75)
	cout << "Distinction";
	if(percentage >= 60)
	cout << "First class";
	if(percentage >= 50)
	cout << "second class";
	if(percentage >= 35)
	cout << "pass class";
	if(percentage < 35)
	cout << "Fail";
	
}