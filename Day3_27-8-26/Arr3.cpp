/*
6.Write a program scan array which is 
combination of positive and negative numbers and copy
only positive numbers into 
second array and print how number copied.
*/
#include<iostream>
using namespace std;

main(){
	int a[5];
	int b[5];
	cout <<"\nEnter Array data: ";
	for(int i=0; i<5; i++){
		cout <<"\nEnter number: a["<<i<<"]= ";
		cin >> a[i];
	}
	cout << "\nArray1: ";
	for(int i=0; i<5; i++){
		cout <<a[i]<<" ";
	}
	
	for(int i=0;i<5;i++){
		if(a[i] > 0){
			b[i] = a[i];
		}
		else
		b[i] = 0;
	}
	cout <<"\nArray1: ";
	for(int i=0; i<5; i++){
		cout <<b[i]<<" ";
	}
}