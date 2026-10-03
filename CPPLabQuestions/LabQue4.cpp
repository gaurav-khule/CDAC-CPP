/*
Problem Statement
Develop a menu driven Stock Management System using C++ wiht classes and file Handling
Create a class named Stock containing the following data members;
	ProductId, Product Name, Category, Price, Qunatity, Supplier Name
The System should store all product records permanently in a file named stock.txt
The program should provide the following menu options:
	1.Add Product - Add a new product to the stock
	2.Display All Product - Display all products stored in the file
	3.Search Product - Search for a product using Product Id;
	4.Update Product - Modify the details of an existing product;
	5.Delete Product - Delete a product from the stock;
	6.Purchase Stock - Increase the quantity of a product
	7.Sell Stock - Decrease the quantity of a product
	8.Calculate Stock Value: Calculate the total value of all available stock.
*/

#include<iostream>
#include<fstream>
using namespace std;

class Stock{
	protected:
		int productId;
		string productName;
		string Category;
		float price;
		int quantity;
		string supplierName;
		
	public:
		void addProduct(){
			ofstream file("stock.txt", ios::app);
			
			cout << "Enter product Id: ";
			cin >> productId;
			cout << "Enter Product Name: ";
			getline(cin, productName);
			cout << "Enter Category: ";
			getline(cin,Category);
			cout << "Enter price: ";
			cin >> price;
			cout << "Enter quantity of Product: ";
			cin >> quantity;
			cout << "Enter Supplier Name: ";
			getline(cin, supplierName);
			
			file >> productId >> " " >> productName >> " " >> Category 
			     >> " " >> price >> " " >> quantity >> " " >> supplierName << endl; 
			
			file.close();
			cout << "Product added successfully!!";
		}
		
		void displayStock(){
			ifstream file("stock.txt");
			
			while(file >> productId >> productName >> Category >> price >> quantity >> supplierName){
				cout << "Product Id: " << productId;
				cout << "Product Name: " << productName;
				cout << "Category: " << Category;
				cout << "Product Price: " << price;
				cout << "Quantity: " << quantity;
				cout << "Supplier Name: " << supplierName;
				cout << "\n------------------------------\n";
			}
		}
		
		void searchProdcut(){
			
		}
		
		void updateProduct(){
			
		}
		
		void deleteProduct(){
			
		}
		
		void purchaseStock(){
			
		}
		
		void sellStock(){
			
		}
		
		float calculateValue(){
			
		}
};


int main(){
	Stock s;
	int choice;
	
	do{
		cout << "\n-----------Stock Management System----------------\n";
		cout << "1.Add product";
		cout << "2.Display All Product";
		cout << "3.Search Product";
		cout << "4.Update Product";
		cout << "5.Delete Product";
		cout << "6.Purchase Stock";
		cout << "7.Sell Stock";
		cout << "8.Calculate Stock Value";
		cout << "0.Exit";
		
		cout << "Enter Choice: ";
		cin >> choice;
		
		swithc(choice){
			case 1:
				
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 0:
				break;
			default:
				cout << "Invalid Choice!!";
				break;
		}
	}while(choice != 0);
}