#include<iostream>
using namespace std;
/*
Area of circle = pi*r*r
Area of Sphere = 4*pi*r*r
Area of Cylinder = 2prh+2pr*r
*/
class Shape{
	public:
	float r,h;
	
	void getData(){
		cout << "\nEnter Radius: ";
		cin >> r;
		cout << "Enter height: ";
		cin >> h;
	}
};

class Circle: public Shape{
	public:
	void area(){
		getData();
		cout << "Area of Circle: " << 3.14*r*r;
	}
};

class Sphere : public Shape{
	public:
	void area(){
		getData();
		cout << "Area of Sphere: " << 4 * 3.14 * r * r;
	}
};

class Cylinder : public Shape{
	public:
	void area(){
		getData();
		cout << "Area of Cylinder: " << 2*3.14*r*h + 2*3.14*r*r;
	}
};


int main(){
	Circle c;
	Sphere s;
	Cylinder cc;
	cout << "\nCircle";
	c.area();
	cout << "\nSphere";
	s.area();
	cout << "\nCylinder";
	cc.area();
}