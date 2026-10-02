#include<iostream>
#include<map>
using namespace std;

int main(){
	map<int, string> students;
	
	students[101] = "Rahul";
	students[102] = "Amit";
	students[103] = "Priya";
	students[104] = "Alex";
	
	cout << "Student 1: " << students[101] << endl;
	cout << "Student 2: " << students[102] << endl;
	cout << "Student 3: " << students[103] << endl;
 
}