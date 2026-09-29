#include<iostream>
#include<string>
using namespace std;

class Employee{
    protected:
        string name;
        int empID;
        double salary;

    public:
        Employee(string n, int id, double s){
            name = n;
            empID = id;
            salary = s;
        }

        void displayEmployee(){
            cout << "Employee ID: " << empID << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }

        ~Employee(){
            cout << "Employee object destroyed." << endl;
        }
};

int main(){

    Employee e1("Alex", 101, 50000);

    e1.displayEmployee();

    return 0;
}