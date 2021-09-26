#include<iostream>
#include<string.h>
using namespace std;
	string fullName(string fname, string lname){
	string plus = fname + " " + lname;
	return plus;
	}
int main(){
	string firstname, lastname, fullname;
	cout << "Input first name : " ; cin >> firstname;
	cout << "Input last name : " ; cin >> lastname;
	fullname = fullName(firstname,lastname);
	
	cout << fullname << endl;
	
	return 0;
}
