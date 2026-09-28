#include<iostream>
using namespace std;

class personalInfo{
	private:
		string name;
		int age;
	
	public:
		void setData(){
			cout << "Enter Name: ";
			cin >> name;
			
			cout << "Enter Age: ";
			cin >> age;
		}
		string getName(){
			return name;
		}
		int getAge(){
			return age;
		}
};

class AcademicInfo: public personalInfo{
	private:
		int rollNo; 
		float marks, totalMark;
	
	public:
		void setAcademicData(){
			cout << "Enter rollNo: ";
			cin >> rollNo;
			cout << "Enter Marks: ";
			cin >> marks;	
			cout << "Enter total marks: ";
			cin >> totalMark;
		}
		
		void calculatePer(){
			float per = (marks / totalMark) * 100;
			cout << "Percentage: " << per << endl;
		}
		
		void display(){
			cout << "Name: " << getName() << endl;
			cout << "Age: " << getAge() << endl;
			cout << "Roll No: " << rollNo << endl;
			cout << "Marks: " << marks << endl;
			cout << "Total Marks: " << totalMark << endl;
		}
};

int main(){
	AcademicInfo a;
	
	a.setData();
	a.setAcademicData();
	a.display();
	a.calculatePer();
}