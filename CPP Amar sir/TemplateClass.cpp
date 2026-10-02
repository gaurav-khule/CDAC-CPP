#include<iostream>
using namespace std;

template <typename T>
class Box{
	private:
		T value;
	
	public:
		void setValue(T v){
			value = v;
		}
		
		void display(){
			cout << "Value: " << value << endl;
		}
};

int main(){
	Box<int> b1;
	b1.setValue(12);
	b1.display();
	
	Box<float> b2;
	b2.setValue(55.55);
	b2.display();
	
	Box<char> b3;
	b3.setValue('G');
	b3.display();
	
	Box<string> b4;
	b4.setValue("Hello");
	b4.display();
}