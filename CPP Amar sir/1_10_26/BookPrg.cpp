/*
Write a C++ program to store book ID, title, author, and 
availability status in a file. The program should allow adding and displaying books.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int choice;
	do{
		cout << "\n1.Add Book";
		cout << "\n2.Display Book";
		cout << "\n3.Exit";
		
		cout << "\nEnter your choice: ";
		cin >> choice;
		
		if(choice == 1){
			int id;
			string author, title;
			char available;
			
			cout << "Enter ID: ";
			cin >> id;
			cout << "Enter Author Name: ";
			cin >> author;
			
			cin.ignore();
			
			cout << "Enter Book Title: ";
			getline(cin, title);
			
			cout << "Is Book Available(Y/N): ";
			cin >> available;
			
			ofstream file("book.txt", ios::app);
			file << id << ", " << author << ", " << title << ", " << available << endl;
			
			file.close();
			
			cout << "Book Added Successfully!!\n";
		}
		
		else if(choice == 2){
			int id;
			string author, title;
			char available;
			
			ifstream file("book.txt");
			
			cout << "\nLibrary Books\n";
			cout << "-----------------\n";
			
			while(file >> id >> author >> title >> available)
			cout << "Book Id: " << id << endl;
			cout << "Author: " << author <<  endl;
			cout << "Title: " << title <<  endl;
			cout << "Status: " << (available == 'Y' ? "Available" : "Issued") << endl;
			cout << "----------------------------------\n";
			
			file.close();
		}
		
	}while(choice != 3);
	return 0;
}
