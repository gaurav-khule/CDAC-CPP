#include <iostream>
using namespace std;

class Employee {
	private:
    int empID;
    string name;
    float salary;

	public:
    void setData(int id, string n, float s) {
        empID = id;
        name = n;
        salary = s;
    }

    float getSalary() {
        return salary;
    }

    void getData() {
        cout << "\nEmployee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Bonus : public Employee {
	private:
    int att_days;

	public:
    float bonus;

    void setAttendance(int days) {
        att_days = days;
    }

    void calculateBonus() {
        if (att_days > 200) {
            bonus = getSalary() * 10/100;
        }
        else {
            bonus = getSalary() * 6.5/100;
        }
    }

    void netSalary() {
        float finalSalary = getSalary() + bonus;

        cout << "Bonus: " << bonus << endl;
        cout << "Net Salary: " << finalSalary << endl;
    }
};

int main() {

    Bonus obj;

    obj.setData(101, "Alex", 50000);
    obj.setAttendance(220);
    
    obj.getData();
    obj.calculateBonus();
    obj.netSalary();

	cout << "-------------";

	obj.setData(102, "Harry", 30000);
    obj.setAttendance(185);
    
    obj.getData();
    obj.calculateBonus();
    obj.netSalary();

    return 0;
}