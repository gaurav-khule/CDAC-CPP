#include<iostream>
using namespace std;

main(){
	int year = 2000, count = 0;
	while(year <= 2026){
		if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
			count << year;
			count++;
		}
		year++;
	}	
	cout << "Total leap year between 2000 to 2026 is: " << count;
}