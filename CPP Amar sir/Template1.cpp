#include<iostream>
using namespace std;
// Same Parameter
template <typename T>
T maximum(T a, T b){
	if(a > b)
	return a;
	else
	return b;
}

int main(){
	cout << "Maximum Integer: " << maximum(10, 20) << endl;
	cout << "Maximum float: " << maximum(5.5, 3.2) << endl;
	cout << "Maximum Char: " << maximum('D','B') << endl;  // It compare by ascii value
	
	// here we can not use different data in parameter
   //  cout << "Maximum " << maximum(10, 5.5) << endl;
}