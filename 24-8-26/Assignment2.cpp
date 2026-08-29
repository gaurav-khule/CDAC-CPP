#include<iostream>
using namespace std;

main(){
	int hr, min, sec;
	cout << "Enter hours = ";
	cin >> hr;
	min = hr * 60;
	sec = min * 60;
	cout << "\nHours = " << hr;
	cout << "\nMinutes = " << min;
	cout << "\nSeconds = " << sec;
}