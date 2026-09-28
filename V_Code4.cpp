#include<iostream>
using namespace std;

class Student{
	private:
		int rollNo;

	public:
		void setRollNo(){
			cout << "Enter roll no: ";
			cin >> rollNo;
		}

		void displayRollNo(){
			cout << "\nRoll No: " << rollNo << endl;
		}
};

class Test : virtual public Student{
	private:
		int marks;

	public:
		void setTestMark(){
			cout << "Enter Test marks: ";
			cin >> marks;
		}

		int Tmarks(){
			return marks;
		}

		void getMarks(){
			cout << "Marks: " << marks << endl;
		}
};

class Sports : virtual public Student{
	private:
		int sportMarks;

	public:
		void setSportMark(){
			cout << "Enter sport marks: ";
			cin >> sportMarks;
		}

		int getSM(){
			return sportMarks;
		}

		void getSportMarks(){
			cout << "Sport Marks: " << sportMarks << endl;
		}
};

class Result : public Test, public Sports{
	public:
		void display(){
			cout << "Test Marks: " << Tmarks() << endl;
			cout << "Sport Marks: " << getSM() << endl;
			cout << "Result: " << Tmarks() + getSM() << endl;
		}
};

int main(){
	Result r;

	r.setRollNo();
	r.setTestMark();
	r.getMarks();
	r.setSportMark();
	r.getSportMarks();

	cout << "\n----------------";
	r.displayRollNo();
	r.display();

	return 0;
}