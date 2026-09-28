#include<iostream>
using namespace std;

class Employee{
	private:
		int empID;
		string name;
		float salary;

	public:
		void setData(){
			cout << "Enter Employee ID: ";
			cin >> empID;

			cout << "Enter name: ";
			cin >> name;

			cout << "Enter salary: ";
			cin >> salary;
		}

		float getSalary(){
			return salary;
		}

		void displayEmp(){
			cout << "Employee Details------";
			cout << "\nEmployee ID: " << empID << endl;
			cout << "Name: " << name << endl;
			cout << "Current salary: " << salary << endl;
		}
};

class Bonus : public Employee{
	private:
		float bonus;
		float total;

	public:
		void setBonus(){
			setData();

			cout << "Enter Bonus: ";
			cin >> bonus;

			total = getSalary() + bonus;
		}

		float getTotal(){
			return total;
		}
};

class Incentive : public Bonus{
	private:
		float net;
		int incet;

	public:
		void setIncentive(){
			setBonus();

			cout << "Enter incentive: ";
			cin >> incet;

			net = getTotal() + incet;
		}

		void getData(){
			displayEmp();
			cout << "Net balance: " << net << endl;
		}
};

int main(){
	Incentive i;

	i.setIncentive();
	i.getData();

	return 0;
}