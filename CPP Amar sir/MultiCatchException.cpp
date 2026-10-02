#include<iostream>
using namespace std;

int main(){
	try{
		int choice;
		cout << "Enter choice: ";
		cin >> choice;
		
		if(choice == 1)
			throw 10;
		
		else if(choice == 2)
			throw 3.14f;
			
		else
			throw "Invalid operation";
		
	}
	catch(int x){
		cout << "Integer exception: " << x;
	}
	  catch (float x) {
        cout << "Float exception: " << x;
    }
    catch (const char* x) {
        cout << "String exception: " << x;
    }
    return 0;
}