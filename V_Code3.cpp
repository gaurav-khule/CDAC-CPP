#include<iostream>
using namespace std;

class A{
	private:
		int a;

	public:
		void setAData(){
			cout << "\nEnter first class 'a' value: ";
			cin >> a;
		}

		int sq(){
			return a * a;
		}

		void displayAData(){
			cout << "Square: " << sq() << endl;
		}
};

class B{
	private:
		int a;

	public:
		void setBData(){
			cout << "\nEnter second class 'a' value: ";
			cin >> a;
		}

		int cube(){
			return a * a * a;
		}

		void displayBData(){
			cout << "Cube: " << cube() << endl;
		}
};

class C : public A, public B{
	private:
		int p, q;
		float ans;

	public:
		void setCData(){
			cout << "\nEnter p value: ";
			cin >> p;

			cout << "\nEnter q value: ";
			cin >> q;
		}

		float finalAnswer(){
			ans = (p + q) * sq() * cube();
			return ans;
		}
};

int main(){
	C obj;

	obj.setAData();
	obj.setBData();
	obj.setCData();

	obj.displayAData();
	obj.displayBData();

	cout << "Final Answer: " << obj.finalAnswer() << endl;
}