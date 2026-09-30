//Example of getline();

#include<iostream>
using namespace std;

main(){
	char str[50];
	
//	If we use only cin to input it will read only data bedore space
//	Input :- Have a nice day ---> it will take only Have
//	cout <<"\nEnter str: ";
//	cin >> str;
//	cout << "Using cin: " << str;

	
	// Here we use getline --> it read all input line
	cout << "Enter String: ";
	cin.getline(str, 20);
	cout << "\nStirng = " << str;
	
	//It print character upto given number (str, 5) 
	// Have a nice day -->  Have
	cout << "\n";
	cout.write(str, 5);
}