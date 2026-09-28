#include<iostream>
using namespace std;

class Phone{
	protected:
		string brand;
		string model;
		string number;
		
	public:
		void getPhoneDetails(){
			cout << "Brand Name: ";
			cin >> brand;
			
			cout << "Model: ";
			cin >> model;
			
			cout << "Number: ";
			cin >> number;
		}
};

class Camera{
	protected:
	float resolution;
	int lenses;
	
	public:
		void getCameraDetails(){
			cout << "Enter Camera Resolution: ";
			cin >> resolution;
			
			cout << "Enter lenses: ";
			cin >> lenses;
		}
};
class Smartphone : public Phone, public Camera
{
	public:
		void getSmartphoneDetails(){
			getPhoneDetails();
			getCameraDetails();
		}
		
		void displaySmartphoneDetails(){
			cout << "\nSmartphone Specifications" << endl;
			cout << "Brand: " << brand << endl;
			cout << "Model: " << model << endl;
			cout << "Phone Number: " << number << endl;
			cout << "Camera Resolution: " << resolution << endl;
			cout << "Number of Lenses: " << lenses << endl;
		}
};

int main(){
	Smartphone s;
	
	s.getSmartphoneDetails();
	s.displaySmartphoneDetails();
	
	return 0;
}