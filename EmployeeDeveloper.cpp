#include<iostream>
using namespace std;

class Employee{
	protected:
		int empId;
		string name;
		
	public:
		void getEmployeeDetails(){
			cout << "Enter Employee ID: ";
			cin >> empId;
			
			cout << "Enter Employee Name: ";
			cin >> name;
		}
};

class Developer : public Employee{
	protected:
		string language;
		int experience;
		
	public:
		void getDeveloperDetails(){
			getEmployeeDetails();
			
			cout << "Enter Programming Language: ";
			cin >> language;
			
			cout << "Enter Experience in Years: ";
			cin >> experience;
		}
};

class SeniorDeveloper : public Developer{
	private:
		int projectCount;
		
	public:
		void getSeniorDeveloperDetails(){
			getDeveloperDetails();
			
			cout << "Enter Project Count: ";
			cin >> projectCount;
		}
		
		void displayDetails(){
			cout << "\n Employee Details" << endl;
			cout << "Employee ID: " << empId << endl;
			cout << "Name: " << name << endl;
			cout << "Programming Language: " << language << endl;
			cout << "Experience: " << experience << " Years" << endl;
			cout << "Project Count: " << projectCount << endl;
			
			if(experience >= 5)
				cout << "Experience Level: Senior" << endl;
			else
				cout << "Experience Level: Junior" << endl;
		}
};

int main(){
	SeniorDeveloper s;
	
	s.getSeniorDeveloperDetails();
	s.displayDetails();
	
	return 0;
}
