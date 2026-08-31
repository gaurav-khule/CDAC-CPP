/*
Static data member & static member variable
*/

#include<iostream>
using namespace std;

class point{
	private:
		int a,b;
		static int count;
		
	public:
		void set(){
			cout <<"\nEnter value for a & b: ";
			cin >>a>>b;
			count++;
		}
		
		void getData(){
			cout <<"\nA= "<<a<<"\nB= "<<b<<"\nC= "<<count;
		}
};

int point :: count; // Static variable defination

main(){
	point t1,t2;
	
	t1.getData();
	t2.getData();
	
	t1.set();
	t1.getData();
	t2.getData();
	
	point t3;
	t3.getData();
}