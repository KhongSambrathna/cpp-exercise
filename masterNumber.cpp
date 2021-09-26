#include<iostream>
using namespace std;
int main () 
{
	int numberOneMultiply = 1, RepresentsMultiplication;
	for (RepresentsMultiplication=1;RepresentsMultiplication<=10;RepresentsMultiplication++)
	{
		cout << numberOneMultiply;
		cout << " x ";
		cout << RepresentsMultiplication;
		cout << " = ";
		cout << numberOneMultiply*RepresentsMultiplication;
		cout << "\n";
	}
	
	cout << "\n";
	
	int numberTwoMultiply = 2, RepresentsMultiplication1;
	for (RepresentsMultiplication1=1;RepresentsMultiplication1<=10;RepresentsMultiplication1++)
	{
		cout << numberTwoMultiply;
		cout << " x ";
		cout << RepresentsMultiplication1;
		cout << " = ";
		cout << numberTwoMultiply*RepresentsMultiplication1;
		cout << "\n";
	}
	
	cout << "\n";
	
	int numberThreeMultiply = 3, RepresentsMultiplication2;
	for (RepresentsMultiplication2=1;RepresentsMultiplication2<=4;RepresentsMultiplication2++)
	{
		cout << numberThreeMultiply;
		cout << " x ";
		cout << RepresentsMultiplication2;
		cout << " = ";
		cout << numberThreeMultiply*RepresentsMultiplication2;
		cout << "\n";
	}
	
	return 0;
}
