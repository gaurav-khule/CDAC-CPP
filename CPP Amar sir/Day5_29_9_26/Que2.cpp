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

        ~Employee(){
            cout << "Employee object destroyed." << endl;
        }
};

class Manager : public Employee{
    private:
        string department;

    public:
        Manager(string n, int id, double s, string d)
            : Employee(n, id, s)
        {
            department = d;
        }

        void displayManager(){
            cout << "Employee ID: " << empID << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Department: " << department << endl;
        }

        ~Manager(){
            cout << "Manager object destroyed." << endl;
        }
};

int main(){

    Manager m1("Alex", 101, 60000, "IT");

    m1.displayManager();

    return 0;
}