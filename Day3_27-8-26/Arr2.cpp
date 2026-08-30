/*
5. Write a program scan two array and stored 
alternate number into third array
*/

#include<iostream>
using namespace std;

main(){
	int a[10], b[10], c[20];
	int n, z=0;
	
	cout <<"Enter size: ";
	cin >> n;
	
	cout << "Enter first array: ";
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	cout << "Enter second array: ";
	for(int i=0; i<n; i++){
		cin >> b[i];
	}
	
	for(int i=0; i<n; i++){
		c[z] = a[i];
		z++;
		
		c[z] = b[i];
		z++;
	}
	
	cout << "\nThird array: ";
	for(int i=0; i<z; i++){
		cout <<c[i]<<" ";
	}
}