#include<iostream>
using namespace std;

main(){
	int a[5];
	for(int i=1; i<=5;i++){
		cout << "Enter array a[" <<i<< "]=" ;
		cin >> a[i];
	}
	cout << "Array: ";
	for(int i=1; i<=5; i++){
		cout << a[i] << " ";	
	}
	
	cout << "\n";
	int count=0;
	for(int i=1; i<=5; i++){
		if(a[i] < 0){
			a[i] = 0;
			count++;
		}
	}
	cout << "Array after convert: ";
	for(int i=1; i<=5; i++){
		cout <<  a[i] << " ";
	}
	cout << "\nTotal Count: " << count;
}
