#include <iostream>
using namespace std;

class base {
private:
    int a, b;

protected:
    int c;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    void calculate() {
        c = a + b;
    }

    void getData() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

class derived : public base {
private:
    int p, q;
    int ans;

public:

    void set(int y, int z) {
        p = y;
        q = z;
    }

    void calculateAns() {
        ans = (p * q) + c;
    }

    void get() {
        cout << "p = " << p << endl;
        cout << "q = " << q << endl;
        cout << "ans = " << ans << endl;
    }
};

int main() {

    derived obj;

    obj.setData(2, 3);
    obj.calculate();

    obj.set(5, 3);
    obj.calculateAns();

    obj.getData();
    obj.get();

    return 0;
}