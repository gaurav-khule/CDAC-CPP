
#include <iostream>
using namespace std;

void copy(char *str1, char *str2){
    while (*str1 != '\0') {
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
}

int main() {
    char str1[20], str2[20];

    cout << "Enter String: ";
    cin.getline(str1, 20);

    copy(str1, str2);

    cout << "Original String: " << str1 << endl;
    cout << "Copied String: " << str2;

    return 0;
}