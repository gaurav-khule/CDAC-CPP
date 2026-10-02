#include<iostream>
using namespace std;

int main(){
	try{
		cout<<"\nTry Block";
		int age = 55;
		if(age < 18)
		throw age;
		
		cout << "\nYou are eligible to vote";
		cout << "\nTry End";
	}
	catch(int x){
		cout << "\nException: Age is less than 18";
	}
}