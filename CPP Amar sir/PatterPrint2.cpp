#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
   int n=5;
   for(int i=1; i<=n; i++){
   	cout<<endl<<"X"<<setw(i)<<"X";
   	cout<<endl<<setw(7)<<setfill("X")<<"";
	}
	return 0;
}
    
