#include<iostream>
using namespace std;

main(){
	int num = 123;
	int rev=0;
	
	while(num > 0){
		int digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	}
	cout << rev;
}