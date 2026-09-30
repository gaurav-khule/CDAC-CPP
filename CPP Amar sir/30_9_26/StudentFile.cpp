#include<iostream>
#include<fstream>
using namespace std;

class Student{
	public:
		int rollno;
		string name;
		float marks;
		
	void input(){
		cout << "Enter RollNo: ";
		cin >> rollno;
		cout << "Enter Student Name: ";
		cin >> name;
		cout << "Enter Student marks: ";
		cin >> marks;
	}
	
	void display(){
		cout << "RollNo: " << rollno;
		cout << "\nName: " << name;
		cout << "\nMarks: " << marks << "\n\n";
	}
};


int main(){
 	
	Student s;
	int choice;
	 
	do{
		cout << "\n----------Student Menu-----------";
		cout << "\n1. Add Student";
		cout << "\n2. Display Student";
		cout << "\n0. Exit";
	 	
		cout << "\nEnter choice: ";
		cin >> choice;
		
		switch(choice){
			
			case 1:{
				ofstream fileout("student.txt", ios::app);
				
				s.input();
				
				fileout << s.rollno << " " 
				        << s.name << " " 
				        << s.marks << endl;
				
				fileout.close();
				cout << "Data Recorded Successfully!!" << endl;
				break;
			}
			
			case 2:{
				ifstream fileIn;
				fileIn.open("student.txt");
				
				while(fileIn >> s.rollno >> s.name >> s.marks){
					s.display();
				}
				
				fileIn.close();
				break;
			}
				 
			case 0:
				cout << "Program Terminated" << endl;
				break;
			
			default:
				cout << "Invalid Input!!" << endl;
				break;
		}
		
	}while(choice != 0);
}