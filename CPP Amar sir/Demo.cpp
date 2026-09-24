#include <iostream>
using namespace std;

int main(){
	int arr[100];
	int size;
	cout << "Enter size: ";
	cin >> size;
	
	cout << "Enter elements: ";
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	
	//Display elements
	cout << "Array elements are: ";
	for(int i=0; i<5; i++){
		cout << arr[i] << " ";
	}
	return 0;
}