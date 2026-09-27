#include <iostream>
using namespace std;

class base {
public:
    void show() {
        cout << "\nBase class";
    }
};

class sub : public base {
public:
    void show() {
        base::show();
        cout << "\nDerived class";
    }
};

int main() {

    sub s;
    s.show();
    return 0;
}