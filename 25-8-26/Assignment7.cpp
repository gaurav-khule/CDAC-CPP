#include<iostream>
using namespace std;

main(){
	int n,a=1,count=0;
	while(a <= 10){
		cout << "Enter num: ";
		cin >> n;
		if(n % 2 == 0)
			count++;
		a++;
	}	
	cout << "Even no count = " << count;
}