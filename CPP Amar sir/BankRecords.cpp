#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
using namespace std;

class Bank {
public:
    long accNumber;
    string name;
    double balance;

    void input() {
        cout << "Enter Account number: ";
        cin >> accNumber;

        cout << "Account name: ";
        cin >> name;

        cout << "Enter balance: ";
        cin >> balance;
    }

    void display() {
        cout << "\nAccount Number: " << accNumber;
        cout << "\nAccount Holder Name: " << name;
        cout << "\nAccount balance: " << balance << endl;
    }
};

int main() {
    Bank b;
    int choice, searchNo;
    bool found;

    do {
        cout << "\n\nBanking Record System";
        cout << "\n1. Add Records";
        cout << "\n2. Show/List Data";
        cout << "\n3. Search Records";
        cout << "\n4. Edit Records";
        cout << "\n5. Delete Records";
        cout << "\n6. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            ofstream file("bankrecord.txt", ios::app);

            b.input();

            file << b.accNumber << " " << b.name << " "
                 << b.balance << endl;

            file.close();

            cout << "Record Added Successfully!!";
        }

        else if (choice == 2) {
            ifstream file("bankrecord.txt");
            found = false;

            while (file >> b.accNumber >> b.name >> b.balance) {
                b.display();
                found = true;
            }

            file.close();

            if (!found) {
                cout << "No record found";
            }
        }

        else if (choice == 3) {
            ifstream file("bankrecord.txt");
            found = false;

            cout << "Enter account no: ";
            cin >> searchNo;

            while (file >> b.accNumber >> b.name >> b.balance) {
                if (b.accNumber == searchNo) {
                    b.display();
                    found = true;
                    break;
                }
            }

            file.close();

            if (!found) {
                cout << "No record found!!";
            }
        }

        else if (choice == 4) {
            ifstream file("bankrecord.txt");
            ofstream temp("temp.txt");
            found = false;

            cout << "Enter account number: ";
            cin >> searchNo;

            while (file >> b.accNumber >> b.name >> b.balance) {
                if (b.accNumber == searchNo) {
                    cout << "Enter new details:\n";
                    b.input();
                    found = true;
                }

                temp << b.accNumber << " " << b.name << " "
                     << b.balance << endl;
            }

            file.close();
            temp.close();

            remove("bankrecord.txt");
            rename("temp.txt", "bankrecord.txt");

            if (found) {
                cout << "Record Updated Successfully";
            }
            else {
                cout << "Record not found";
            }
        }

        else if (choice == 5) {
            ifstream file("bankrecord.txt");
            ofstream temp("temp.txt");
            found = false;

            cout << "Enter account number: ";
            cin >> searchNo;

            while (file >> b.accNumber >> b.name >> b.balance) {
                if (b.accNumber == searchNo) {
                    found = true;
                    continue;
                }

                temp << b.accNumber << " " << b.name << " "
                     << b.balance << endl;
            }

            file.close();
            temp.close();

            remove("bankrecord.txt");
            rename("temp.txt", "bankrecord.txt");

            if (found) {
                cout << "Record Deleted Successfully";
            }
            else {
                cout << "Record not found";
            }
        }

        else if (choice == 6) {
            cout << "Exit";
        }

        else {
            cout << "Invalid Input";
        }

    } while (choice != 6);

    return 0;
}