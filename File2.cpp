#include<iostream>
#include<fstream>
using namespace std;

//Name: Alex 
//email
//phne: 

int main(){
	string name;
	cout << "Enter name: ";
	getline(cin,name);
	
	string email;
	cout << "Enter email: ";
	getline(cin,email);
	
	int phone;
	cout << "Enter phone no: ";
	cin >> phone;
	
	ofstream fwrite("mydata.txt");
		fwrite<<"Hi, " << name;
		fwrite<<"\nEmail: " << email;
		fwrite<<"\nPhone: " << phone;
		fwrite.close();
	
  	cout<<"\nWriting done and file closed";

}