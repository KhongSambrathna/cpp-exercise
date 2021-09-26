#include<iostream>
using namespace std;
int main(){
	string password;
	string username;
	int count = 0;
	while (count<3) {
		cout << "===Login Form===\n";
		cout << "Username : "; 
		cin >> username;
		cout << "Password : "; 
		cin >> password;
		if (username=="Dara" && password=="Dr@2222") {
			cout << "\nLogin Success!\n";
			break;
		} 
		else if (username=="Piseth" && password=="9999") {
			cout << "\nLogin Success! \n";
			break;
		} 
		else {
			cout << "\nIncorrect Password, Try again!\n"<< '\n';
			count++;
		}
	}
	if (count == 3){
		cout << "\nDisabled\n";
		return 0;
	}


}
