#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int age;
    string name;
   
 
 	cout<<"\nAge:";
    cin >> age;           //reads 21, leaves '\n'
    
    //This will flush out all old data from the scene stream and wait for new data to come in. 
	//Generally best utilized to stop before getline comes into the picture 
    cin.ignore();
    cout<<"\nFull name:";
    gestline(cin, name);   //reads full line
   
    cout << "age = " << age << "\n";
    cout << "name = [" << name << "]\n";
    return 0;
}

