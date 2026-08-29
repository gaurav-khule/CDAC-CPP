#include<iostream>
using namespace std;

main(){
	string product_name;
	float rate;
	int quantity;
	
	cout << "Enter product name = ";
	cin >> product_name;
	cout << "Rate = ";
	cin >> rate;
	cout << "Quantity = ";
	cin >> quantity;
	
	float amount = rate * quantity;
	
	cout << "\nProduct = " << product_name;
	cout << "\nRate = " << rate;
	cout << "\nQuantity = " << quantity;
	cout << "\nAmount = " << amount;
}