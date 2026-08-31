/*
Polymorphism
1.Function overloading
*/

#include<iostream>
using namespace std;

class Poly{
	private:
		int a,b;
		float c;
		char ch;
	
	public:
		void set(int x, int y){
			a=x;
			b=y;
			c=a+b;
		}
		
		int set(int a){
			this->a=a;
			return (a*a); 
		}
		
		float set(float x, float y, float z){
			return (x+y+z);
		}
		
		void getData(){
			cout <<"\nA="<<a<<"\nB="<<b<<"\nC="<<c<<"\nChar="<<ch;
		}
		
};

main(){
	Poly t1; 
	cout <<"\nFloat: " << t1.set(2.5f,4.06f,8.66f);
	t1.set(100,200);
	t1.getData();
	cout <<"\nInteger: "<<t1.set(8);
}