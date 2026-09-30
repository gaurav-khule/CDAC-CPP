// Example of get() and put()

#include<iostream>
using namespace std;

int main(){
	char ch;
	int count=0;
	cout << "Enter Data: " << endl;
	cin.get(ch);
	while(ch != '\n'){
		cout.put(ch);
		cin.get(ch);
		count++;
	}
	
	cout <<"\nTotal Characters: "<<count;

}