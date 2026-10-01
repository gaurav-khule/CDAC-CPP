/*
Write a program create Test file and stored 10 string 
create File1 stored 5 strings 
create File 2 Stored 5 strings
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream testFile;
	ofstream firstFiveFile;
	ofstream lastFiveFile;
	
	//Open file
	testFile.open("Test.txt");
	firstFiveFile.open("FirstFive.txt");
	lastFiveFile.open("LastFive.txt");
	
	char str[20];
	
	for(int i=1; i<=10; i++){
		cout << "Enter String: ";
		cin >> str;
		
		//saving 10 string
		testFile << str << endl;
		
		//saving fisrt 5 string
		if(i >= 1 && i <= 5){
			firstFiveFile << str << endl;
		}
		
		//saving last 5 string
		else{
			lastFiveFile << str << endl;
		}
	}
	
	testFile.close();
	firstFiveFile.close();
	lastFiveFile.close();
	
	// Reading file
	
	ifstream testInputFile("Test.txt");
	ifstream firstFiveInputFile("FirstFive.txt");
	ifstream lastFiveInputFile("LastFive.txt");
	
	//Display
	cout << "\n\nTest File Date";
	cout << "\n----------------";
	
	for(int i=1; i<= 10; i++){
		testInputFile.getline(str, 20);
		cout << "\nString = " << str;
	}
	
	//display first 5 
	cout <<"\n\nFirst Five File Date";
	cout << "\n----------------";
	
	for(int i=1; i<=5; i++){
		firstFiveInputFile.getline(str, 20);
		cout << "\nString = " << str;
	}
	
	//display last 5 
	cout <<"\n\nLast Five File Date";
	cout << "\n----------------";
	
	for(int i=1; i<=5; i++){
		lastFiveInputFile.getline(str, 20);
		cout << "\nString = " << str;
	}
	
	//closing 
	testInputFile.close();
	firstFiveInputFile.close();
	lastFiveInputFile.close();
	
	return 0;
}