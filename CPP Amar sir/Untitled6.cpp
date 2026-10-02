
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    try {
        if (marks < 0 || marks > 100) {
            throw marks;
        }

        cout << "Valid marks";
    }
    catch (int x) {
        cout << "Invalid marks: " << x;
    }

    return 0;
}