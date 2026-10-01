/*
Write a c++ program to store employee Id, name, and basic salary in a file
Calculate and display the gross salary, assuming and allowance of 20% of the basic salary
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int choice;
	do{
		cout <<"\nEmployee Details------";
		cout <<"\n1.Add Employee";
		cout <<"\n2.Display Employees";
		cout <<"\n3.Exit";
		
		cout <<"\nEnter your choice: ";
		cin >> choice;
		
		if(choice == 1){
			int employeeId;
			string name;
			float basicSalary, allowance, grossSalary;
			
			cout <<"Enter Employee ID: ";
			cin >> employeeId;
			cout <<"Enter Employee Name: ";
			cin >> name;
			cout <<"Enter Basic Salary: ";
			cin >> basicSalary;
			
			allowance = basicSalary * 0.20;
			grossSalary = basicSalary + allowance;
	
			ofstream file("employee.txt", ios::app);
			
			file << employeeId << " " << name << " "
				 << basicSalary << " " << allowance
				 << " " << grossSalary <<endl;
			
			file.close();
			
			cout <<"Employee added successfully!!";
		}
		
		else if(choice == 2){
			int employeeId;
			string name;
			float basicSalary, allowance, grossSalary;
			
			ifstream file("employee.txt");
			
			cout <<"\nEmployee Payroll---\n";
			cout <<"-------------------\n";
			
			while(file >> employeeId >> name >> basicSalary >> allowance >> grossSalary){
				cout <<"Employee Id: " << employeeId << endl;
				cout <<"Name: " << name << endl;
				cout <<"Baisc Salary: " << basicSalary << endl;
				cout <<"Allowance: " << allowance << endl;
				cout <<"Gross Salary: " << grossSalary <<endl;
				cout <<"\n--------------\n";
			}
			
			file.close();
		}
	}while(choice != 3);
	return 0;
}