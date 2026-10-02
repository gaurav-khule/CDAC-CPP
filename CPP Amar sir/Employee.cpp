
#include<iostream>
using namespace std;

class Employee {
public:
    int EmpId;
    string name;
    float salary;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> EmpId;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee ID: " << EmpId;
        cout << "\nEmployee Name: " << name;
        cout << "\nSalary: " << salary << endl;
    }
};

int main() {
    Employee e[10];
    int i;
    float maxSalary = 0;

    cout << "Enter Details of 10 Employees\n";

    for (i = 0; i < 10; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        e[i].input();

        if (e[i].salary > maxSalary) {
            maxSalary = e[i].salary;
        }
    }

    cout << "\n\nList of All Employees\n";

    for (i = 0; i < 10; i++) {
        e[i].display();
    }

    cout << "\n\nEmployee(s) with Highest Salary\n";

    for (i = 0; i < 10; i++) {
        if (e[i].salary == maxSalary) {
            e[i].display();
        }
    }

    return 0;
}