/*
write a program scan two strng and join into third string
*/

#include<iostream>
using namespace std;

void concat(char *str1, char *str2, char *str3){
	while(*str1 != '\0'){
		*str3 = *str1;
		*str1++;
		*str3++;
	}
	
	while(*str2 != '\0'){
		*str3 = *str2;
		*str2++;
		*str3++;
	}
	*str3 = '\0';
}

int main(){
	char str1[50], str2[50], str3[50];
	
	cout << "Enter first string: ";
	gets(str1);
	cout << "Enter second string: ";
	gets(str2);
	
	concat(str1, str2, str3);
	
	cout << "\nFirst string: " << str1;
	cout << "\nSecond string: " << str2;
	cout << "\nConcate String: " << str3;
}