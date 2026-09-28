#include<iostream>
using namespace std;

class Person{
	protected:
		string name;
		int age;
		
	public:
		void getPersonDetails()
		{
			cout << "Enter Name: ";
			cin >> name;
			
			cout << "Enter Age: ";
			cin >> age;
		}
};

class Student : virtual public Person{
	protected:
		int rollNo;
		
	public:
		void getStudentDetails()
		{
			cout << "Enter Roll No: ";
			cin >> rollNo;
		}
};

class Employee : virtual public Person
{
	protected:
		string empId;
		
	public:
		void getEmployeeDetails()
		{
			cout << "Enter Employee ID: ";
			cin >> empId;
		}
};

class TeachingAssistant : public Student, public Employee
{
	public:
		void getDetails()
		{
			getPersonDetails();
			getStudentDetails();
			getEmployeeDetails();
		}
		
		void displayDetails()
		{
			cout << "\nTeaching Assistant Details" << endl;
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
			cout << "Roll No: " << rollNo << endl;
			cout << "Employee ID: " << empId << endl;
			cout << "Role: Teaching Assistant" << endl;
		}
};

int main(){
	TeachingAssistant t;
	
	t.getDetails();
	t.displayDetails();
	
	return 0;
}