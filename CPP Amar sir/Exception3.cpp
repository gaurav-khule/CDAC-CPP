#include<iostream>
using namespace std;

int main(){
	try{
		int choice;
		cout << "Enter choice: ";
		cin >> choice;
		
		if(choice == 1)
			throw 100;
		
		if(choice == 2)
			throw 'X';
			
		if(choice == 3)
			throw "Invalid operation";
		
	}
	catch(int x){
		cout << "Integer exception: " << x;
	}
	  catch (char x) {
        cout << "Character exception: " << x;
    }
    catch (const char* x) {
        cout << "String exception: " << x;
    }
    return 0;3
}