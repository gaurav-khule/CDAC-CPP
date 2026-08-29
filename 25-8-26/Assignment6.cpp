#include<iostream>
using namespace std;

main(){
	int choice;
	cout << "1.Largest from 3 numbers\n";
	cout << "2.Voting eligibility";
	cout << "\nEnter your choice: ";
	cin >> choice;
	switch(choice){
		case 1:
			int a,b,c;
			cout << "\nEnter 3 numbers: ";
			cin >> a >> b >> c;
			
			if(a > b && a > c)	
			cout << "A is largest";
			else if(b > a && b > c)
			cout << "B is largest";
			else
			cout <<	"C is largest";
		break;
		case 2:
			int age;
			cout << "\nEnter age: ";
			cin >> age;
			
			if(age >= 18)
			cout << "Eligible for voting";
			else
			cout << "Not eligible for voting";
	}
}