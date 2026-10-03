/*
Develop a Hospital Patient Management System uing C++ file handling

Create a class Patient with the following data member:
	Patient ID;
	Patient Name;
	Age;
	Diesase
	Doctor Name
	Hospital Charges

The Program should provide the following operations
	1.Add a new patient record 
	2.Display all patient records 
	3.Search for a patient records
	4.Update patient information
	5.Delete a patient record
	6.Store all records permanently in a file
*/

#include<iostream>
#include<iostream>
using namespace std;

class Patient{
	protected:
		int patientID;
		string patientName;
		float age;
		string diesase;
		string doctorName;
		float charges;
	
	public:
	void addPatient(){
		ofstream file("patient.txt", ios::app);
			
		cout << "Enter Patient Id: ";
		cin >> patientID;
		
		cout << "Enter Name: ";
		getline(cin, name);
		
		cout << "Enter Age: ";
		cin >> age;
		
		cout << "Enter Patient Diesase: ";
		getline(cin, diesase);
		
		cout << "Enter Doctor Name: ";
		getline(cin,doctorName);
		
		cout << "Hopital Charges: ";
		cin >> charges;
		
		file >> patientId >> ", " >> patientName ", " 
		     >> ", " >> age >> ", " >> diesase >> ", "
		     >> doctorName >> ", " >> charges >> endl;
		     
		file.close();
		cout << "Patient added successfully!!";
	}
	
	void displayPatient(){
		ifstream file("patient.txt");
		
		while(file patientId >> patientName >> age >> diesase >> doctorName >>  charges){
			cout << "Patient Id: " << patientId;
			cout << "Patient Name: " << patientName;
			cout << "Age: " << age;
			cout << "Diesase: " << diesase;
			cout << "Doctor Name: " << doctorName;
			cout << "Hospital Charges: " << charges;
			cout << "\n--------------------------\n";
			
			file.close();
		}
	}
		
	void searchPatient(){
		ifstream file("patient.txt");
		int searchId;
		bool found = flase;
		
		cout << "Enter Patient Id: ";
		cin >> searchId;
		
		while(file >> patientId){
			
			}
	}
		
	void updatePatientInfo(){
		
	}
	
	void deletePatient(){
		
	}	
};

int main(){
	Patient p;
	int choice;
	
	do{
		cout << "\n-------Hospital Patient Management System-------\n";
		cout << "1.Add Patient";
		cout << "2.Display Patient";
		cout << "3.Search Patient";
		cout << "4.Update Patient Information";
		cout << "5.Delete Patient";
		cout << "0.Exit";
		
		cout << "Enter your choice: ";
		cin >> choice;
		
		switch(choice){
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
			case 0:
					cout << "Thank You!! Health is Wealth!!";
				break;
			default:
				cout << "Invalid choice!!";
				break;
		}
	}while(choice != 0);
}