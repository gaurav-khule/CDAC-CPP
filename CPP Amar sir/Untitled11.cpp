#include <iostream>
using namespace std;

// Area of circle
float areaCircle(float r, float pi = 3.14) {
    return pi * (r * r);
}

// Area of rectangle
int areaRectangle(int l, int b) {
    return l * b;
}

int main() {
    cout << "Area of Circle: " << areaCircle(4.45) << endl;
    cout << "Area of Rectangle: " << areaRectangle(6, 9) << endl;

    return 0;
}
