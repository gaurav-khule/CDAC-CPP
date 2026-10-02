#include<iostream>
using namespace std;

class worker{
	public:
	string worker_name;
	int hours;
	float rate, salary;
	
	worker(string n, int h,float r=500){
		worker_name = n;
		hours = h;
		rate = r;	
	}
	
	void calculate(){
		salary = hours * rate;
	}
	
	void display(){
		cout << "\nWOKER DETAILS";
		cout << "\nWorker Name: " << worker_name;
		cout << "\nNo of Hour Worked: " << hours;
		cout << "\nWorker Salary: " << salary;
	}
};

int main(){
	string name;
	int hour;
	float rate;
	cout << "Enter worker name: ";
	cin >> name;
	cout << "Enter hour: ";
	cin >> hour;
	cout << "Enter per hour rate: ";
	cin >> rate;
	
	worker w(name, hour,rate);
	w.calculate();
	w.display();
}