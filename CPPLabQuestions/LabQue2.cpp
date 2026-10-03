/*
Write a C++ program to implement a Student Result Management System using a class student.
The program should use a parameterized constructor to initialize student details, a destructor to display a message when
objects are destroyed
	a static variable to count the number of students, and a static functions to display the count
Store the details of 5 students using an array of objects
Calculate total marks and percentage for each student and display the student with the higest percentage  
*/



#include<iostream>
using namespace std;

class Student{
	protected:
		int rollNo;
		string name;
		float mark1, mark2, mark3;
		
		static int count;
	public:
		Student(int r, string n, float m1, float m2, float m3){
			rollNo = r;
			name = n;
			mark1 = m1;
			mark2 = m2;
			mark3 = m3;
			count++;
		}
		
		~Student(){
			cout << "Student object destroy!!" << endl;
		}
		
		static void displayCount(){
			cout << "Total Count: " << count << endl;
		}
		
		float totalMarks(){
			return mark1 + mark2 + mark3;
		}
		
		float calculatePer(){
			return totalMarks() / 3;
		}
		
		void displayStudent(){
			cout << "\n----------Student Details-------------\n";
			cout << "Student RollNo: " << rollNo;
			cout << "Name: " << name;
			cout << "Total Marks: " << totalMarks();
			cout << "Percentage: " << calculatePer() << " %";
		}
};


int main(){
	Student s[5] = {
	Student(1, "Alex", 19, 15, 17),
	Student(2, "Harry", 11, 16, 18),
	Student(3, "Josh", 20, 13, 12),
	Student(4, "Marry", 15, 19, 10),
	Student(5, "Roy", 14, 18, 18)
	};
	
	//Display student result
	cout << "\n--------Display All Student Details--------\n";
	for(int i=0; i<5; i++){
		s[i].displayStudent();
		}
	
	//Count
	 Student::displayCount();
	
	//
	float max = s[0].calculatePer();
int pos = 0;

for(int i = 1; i < 5; i++) {
    if(s[i].calculatePer() > max) {
        max = s[i].calculatePer();
        pos = i;
    }
}

s[pos].displayStudent();
}