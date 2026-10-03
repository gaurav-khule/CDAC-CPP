/*
Develop a library Book Management System in C++ using Object-Oriented Programming The system should allow a 
librarian to store and manage information about books in a library 
Each book should have details such as book ID, title, author, and availiability status
Create a class named Book with appropriate data members and member functions
Requirements
Your program shouyld:
	Create a Book class containing:
	bookId;
	title;
	author;
	isAvailable

Implement:
	1. Default construction to initialize a book with default values
	2. Parameterized constructor to initilaize book details when an object is created.
	3. Destructor that displays a message when a book object is destroyed
	4. A function displayBook() to display book information
	5. A function issueBook() to issue a book if it is available
	6. A function returnBook() to mark an issued book as available
	
Main Program
	1. Create atleast three Book objects using constructor
	2. Display the details of all books
	3. Issue one or more books
	4. Try to issue an already issued book and display an appropriate message
	5. Return a book
	6. Display the updated book details
	7. Observe the destructor message when the objects are destroyed
*/

#include<iostream>
using namespace std;

class Book{
	protected:
		int bookId;
		string title;
		string author;
		bool isAvailable;
		
	public:
		//default 
		Book(){
			bookId = 0;
			title = "unknown";
			author = "unknown";
			isAvailable = true;
		}
		
		//Para Constructor
		Book(int id, string t, string a, bool b){
			bookId = id;
			title = t;
			author = a;
			isAvailable = b;
		}
		
		//destructor
		~Book(){
			cout << "\nBook Object Destroyed " << title << endl;
		}
		
		//display book infromation
		void displayBook(){
			cout << "\n\nBook Id: " << bookId;
			cout << "\nTitle: " << title;
			cout << "\nAuthor: " << author;
			cout << "\nAvailability: ";
			
			if(isAvailable)
				cout << "Book is Available";
			else
				cout << "Issued";
		}
		
		//issued book
		void issueBook(){
			if(isAvailable){
				isAvailable = false;
				cout << title << " book issued successfully" << endl;
			}
			else
				cout << title << " this book already issued" << endl;
		}
		
		//return book
		void ReturnBook(){
			if(!isAvailable){
				isAvailable = true;
				cout << title << " book return successfully" << endl;
			}
			else
				cout << title << " book is already available";
		}
};

int main(){
	Book b1(1, "Atomic Habits", "James Clear", true);
	Book b2(2, "The Magic of Thinking Big", " David J. Schwartz", true);
	Book b3(3, "The Psychology of Money", " Morgan Housel", true);
	
	//Display
	cout << "\n\n---------First Detials-----------------\n";
	b1.displayBook();
	b2.displayBook();
	b3.displayBook();
	
	
	//Issue
	cout << "\n\n-------------Issue Book-------------\n";
	b1.issueBook();
	b2.issueBook();
	
	//issue again 
	cout << "\n\n----------Again issue-------------\n";
	b1.issueBook();
	
	//return book
	cout << "\n\n-----------------Return book-----------------\n";
	b2.ReturnBook();
	
	//Display updated details of book
	cout << "\n-----------------Updated details-------------\n";
	b1.displayBook();
	b2.displayBook();
	b3.displayBook();
}