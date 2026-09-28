#include<iostream>
using namespace std;

class Employee{
	protected:
		int empID;
		string name;
		
	public:
		void setEmpData(){
			cout << "Enter Employee Id: ";
			cin >> empID; 
			cout << "Enter Employee Name: ";
			cin >> name;
		}
};

class Salary{
	protected:
		int basicSalary;
		int allowances;
		
	public:
		void setSalary(){
			cout << "Enter Basic Salary: ";
			cin >> basicSalary;
			cout << "Enter Allowances: ";
			cin >> allowances;
		}
};

class Payroll : public Employee, public Salary{
	protected:
		int deduction;
		
	public:
		void getPayrollDetails(){
			setEmpData();
			setSalary();
			
			cout << "Enter deduction: ";
			cin >> deduction;
		}
		
		void displayPayrollDetails(){
			float net;
			
			net = basicSalary + allowances - deduction;
			
			cout << "\nEMPLOYEE DETAILS";
			cout << "Employee Id: " << empID << endl;
			cout << "Employee Name: " << name << endl;
			cout << "Basic salary: " << basicSalary << endl;
			cout << "Allowances: " << allowances << endl;
			cout << "Deduction: " << deduction << endl;
			cout << "Net salary: " << net << endl;
		}
};

int main(){
Payroll p;

p.getPayrollDetails();
p.displayPayrollDetails();

return 0;	
}