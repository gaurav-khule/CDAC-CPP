#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout <<"Enter two number: ";
	cin >> a >> b;
	
	try{
		if(b == 0){
			throw "Division by zero is not allowed";
		}
		cout << "Result = " << a/b;
	}
	catch(const char *message){
			cout << "Exception: " << message;
		}
		return 0;
}