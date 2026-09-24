#include <iostream>
using namespace std;
//Default value parameter 
//A parameter which will only be used if the user does not provide 
//Values are given directly in the function definition and activated only if the user fails to provide. 

//void add(int no1=0,int no2=0)
//{
//	cout<<"\nAdding integers :"<<no1<<"+"<<no2<<"="<<(no1+no2);
//}

void nationality(string name, string n="Indian"){
	cout <<"\nName: " << name <<"\nNationality: " << n;
}

int main(){
	nationality("Amar Sir");
	nationality("Alex","American");  
	
//    add(10,20);
//    add(10);
//    add();
    
    return 0;
}
