#include<iostream>
using namespace std;
int main() {
	string username, password;
	cout << "===Login Form===\n";
	cout << "Input Username : ";
	cin >> username;
	cout << "Input Password : ";
	cin >> password;
	if (username == "admin" && password == "SR@12345") {
		cout << "\n===WELCOME ADMIN===";
	} else if (username == "Daro" && password == "USR#9999") {
		cout << "\n==WELCOME DARO===";
	} else {
		cout << "\n!!!FAIL TO LOGIN!!!\n";
		cout << "!!!PLEASE TRY AGAIN!!!";
	}
	return 0;
}

