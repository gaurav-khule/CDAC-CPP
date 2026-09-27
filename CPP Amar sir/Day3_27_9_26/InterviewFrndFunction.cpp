#include <iostream>
using namespace std;

class Inches; //Forward Declaration

class Feet{  
	private:
		float feet;
	
	public:
		void getFeet(){
			cout << "Enter feet: ";
			cin >> feet;
		}
	friend void addDistance(Feet o_f,	Inches o_i);
	//friend void addDistance(Feet, Inches);  WE CAN WRITE IT IN THIS WAY ALSO
};

class Inches{
	private:   
	int inches;

	public:
		void getInches(){
			cout << "Enter Inches: ";
			cin >> inches;
		}
		
	friend void addDistance(Feet o_f,Inches o_i);
};
 
void addDistance(Feet o_f,Inches o_i) {

    int totalFeet = o_f.feet;
    int totalInches = o_i.inches;

    totalFeet = totalFeet + totalInches / 12;
    totalInches = totalInches % 12;

    cout << "Distance: " << totalFeet
         << " Feet " << totalInches << " Inches";
}	

int main() {

    Feet f;
    Inches i;

    f.getFeet();
    i.getInches();

    addDistance(f, i);

    return 0;
}
