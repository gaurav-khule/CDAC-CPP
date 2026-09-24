#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
    string name;
    cout<<"Enter names only 4-6 characters\n";
   // cin>>setw(6)>>name;//The time of taking input, seed, and width can decide the number of characters to be taken. 
//    //cout<<"\nName is:"<<name;
//   cout<<endl<<setw(20)<<"amar";
//   cout<<endl<<setw(20)<<setfill('$')<<"amar";
   int n=5;
   for(int i=1; i<=n; i++){
   	cout<<endl<<setw(i)<<setfill('X')<<"";	
   }
    return 0;
}
