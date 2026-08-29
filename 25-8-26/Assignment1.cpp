#include<iostream>
using namespace std;

main(){
	int yr;
	cout << "Enter year = ";
	cin >> yr;
	if(yr % 400 == 0 && yr % 4 == 0)
		cout << "Given year is leap year";
	else if(yr % 100 == 0)
		cout << "Given year is not a leap year";
	else
		cout << "Gicen year is not a leap year";
}