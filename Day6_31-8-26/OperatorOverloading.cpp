/*
2.Operator overloading
*/

#include<iostream>
using namespace std;

class Test{
	private:
		int a,b,c;
	
	public:
		void set(int x, int y, int z){
			a=x;
			b=y;
			c=z;
		}
		
		//unary operator overload function
		void operator -(){
			a = -a;
			b = -b;
			c = -c;
		}
		
		void getData(){
			cout <<"\nA= "<<a<<"\nB= "<<b<<"\nC= "<<c;
		}
};

main(){
	Test t1;
	t1.set(-10,20,-100);
	t1.getData();
	cout << "\n--------------";
	-t1;
	t1.getData();
}