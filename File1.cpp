#include<iostream>

using namespace std;

int main(){
	ofstream fwrite("data.txt");
	  fwrite<<"hi this is a test";
		fwrite.close();
  	cout<<"\nWriting done and file closed";

}