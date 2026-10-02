#include<iostream>
using namespace std;

int main(){
	int balance;
	cout << "Enter Balance: ";
	cin >> balance;
	int amount;
	cout << "Enter Amount: ";
	cin >> amount;	
	try{
	 	if (amount <= 0) {
            throw "Invalid withdrawal amount";
        }

        if (amount > balance) {
            throw "Insufficient balance";
        }
        
        balance = balance - amount;
		
		cout << "Withdrawal successful.\n";
		cout << "Remaining Balance: " << balance;
		
	}catch(const char* message){
		cout << "Exception: " << message;
	}
}