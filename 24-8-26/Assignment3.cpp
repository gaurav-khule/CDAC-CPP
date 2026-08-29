#include<iostream>
using namespace std;

main(){
	string name;
	int rollno;
	float english;
	float math;
	float science;
	int total = 300;
	float stud_total; 
	float percent;
	
	cout << "Enter student name = ";
	cin >> name; 
	cout << "Enter student roll no = ";
	cin >> rollno;
	cout << "Enter English marks = ";
	cin >> english;
	cout << "Enter Math marks =";
	cin >> math;
	cout << "Enter Science marks = ";
	cin >> science;
	
	stud_total = english + math + science;
	percent =  (stud_total / total) * 100;
	
	cout << "\nStudent name = " << name;
	cout << "\nRoll no = " << rollno;	
	cout << "\nEnglish = " << english;
	cout << "\nMath = " << math;
	cout << "\nScience = " << science;
	cout << "\nPercent = " << percent;
}