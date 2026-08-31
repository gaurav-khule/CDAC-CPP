/*
Destructor;
*/

#include<iostream>
using namespace std;

class Test{
	private:
	int a,b;
	float c;
	char ch;
	
	public:
	//Parametrized constructor
	Test(int count){
		a=count;
	}
	
	//Destrucor
	~Test(){
		cout <<"\n"<<a<<" Object Destroyed";
	}
	void getData(){
		cout <<"\nA="<<a;
	}
};

main(){
	Test obj1(1),obj2(2),obj3(3);
	obj1.getData();
	obj2.getData();
	obj3.getData();
}