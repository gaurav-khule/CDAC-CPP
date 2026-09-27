#include <iostream>
using namespace std;

class base {
private:
    int a, b;

protected:
    int c;

public:

    base() {
        a = 2;
        b = 3;
        c = a + b;
    }

    base(int x, int y) {
        a = x;
        b = y;
        c = a + b;
    }

    void getData() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "--c = " << c << endl;
    }
};

class sub : public base {
private:
    int p, q;
    int ans;

public:
    sub() {
        p = 5;
        q = 4;
        ans = (p * q) + c;
    }

    sub(int a1, int b1, int c1, int d1) : base(a1, b1) {
        p = c1;
        q = d1;
        ans = (p * q) + c;
    }

    void get() {
        cout << "p = " << p << endl;
        cout << "q = " << q << endl;
        cout << "ans = " << ans << endl;
    }
};

int main() {

    sub obj;

    obj.getData();
    obj.get();

    cout << "\n------------\n";

    sub obj2(4, 6, 7, 5);

    obj2.getData();
    obj2.get();

    return 0;
}