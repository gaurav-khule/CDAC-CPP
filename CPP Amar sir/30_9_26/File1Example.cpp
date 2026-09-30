#include<iostream>
#include<fstream>
using namespace std;

main(){
	char str[50];
	ofstream out;
	out.open("Person.txt");
	out<<"Alex Patil";
	out<<"\nQualification = BE(COMP)";
	out<<"\nSalary = 50000 per month";
	out<<"\nExperience = 4 years";
	out.close();
	cout<<"FILE CREATED";
	
	ifstream in;
	in.open("Person.txt");
	
	while(in.getline(str, 50)){
		cout << "\nFile Data:- " << str;
	}
	
	in.close();
}