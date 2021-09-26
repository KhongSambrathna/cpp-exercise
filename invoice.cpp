#include<iostream>
using namespace std;
/*

-Wallet costs $ 33.00
-Pure water for $ 6.30
-Milk for $ 22.50

Write C ++ code to create a program for calculating and displaying

-
-The amount to be paid (grand_total) if the supermarket gives him a 10% discount*/
int main() {
	double Wallet = 33.00 ,Water = 6.30 ,Milk = 22.50,total,grand_total, discountamount;
	int discount = 10;
	total = Wallet + Water + Milk;
	discountamount = total * discount / 100;
	grand_total = total - discountamount;
	cout <<"A customer goes shopping at a supermarket and buy these products\n";
	cout <<"Wallet = " <<Wallet<<" $\n";
	cout <<"Water = " <<Water<<" $\n";
	cout <<"Milk = " <<Milk<<" $\n";
	cout <<"10% discount ="<< discount <<"%\n";
	cout <<"_________________________________________\n\n";
	cout <<"";
	cout << "Total price that the customer buys = "<<total << "$\n";
	cout << "Discount amount = " << discountamount << "$\n";
	cout << "Grand total amount afer 10% discount = "<< grand_total << "$\n";
	return 0;
}
