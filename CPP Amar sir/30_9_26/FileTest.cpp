// Write program product file store the 5 product info and cost of product

#include<iostream>
#include<fstream>
using namespace std;

main(){
	char str[50];
	ofstream out;
	out.open("Product.txt");
	out<<"1.Oversize T-shirt = Rs.999";
	out<<"\n2.Shirt = Rs.1299";
	out<<"\n3.Shoe = Rs.3999";
	out<<"\n4.Jeans = Rs.1499";
	out<<"\n5.Jackets = Rs.5999";
	out.close();
	cout << "Shop Open";
	
	ifstream in;
	in.open("Product.txt");
	
	cout << "\nProducts: ";
	while(in.getline(str, 50)){
		cout <<"\n" <<str;
	}
	in.close();
}