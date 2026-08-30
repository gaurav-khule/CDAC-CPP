#include<iostream>
using namespace std;

main(){
	int a=0,b=1,temp=0;
	cout << a << " ";
	cout << b << " ";
	for(int i=2; i<=10; i++){
		temp = a;
		a = b;
		b = temp + a;
		if(b < 10){
		cout << b << " "; 	
		}
	}
}