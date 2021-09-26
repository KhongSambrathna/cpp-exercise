#include<iostream>
using namespace std;
int main (){
	cout << "===INVOICE===\n";
	string itemname;
	double qty, price,amount,vat,total;
	cout << "Input name's item : ";
	cin >> itemname;
	cout << "Input quanity's item :";
	cin >> qty;
	while (qty<0) {
	cout << "Input quanity's item again : ";
	cin >> qty;	
	}
	cout << "Input price's item : ";
	cin >> price;
	while (price<0) {
	cout << "Input price's item again : ";
	cin >> price;
	cout << " "<<" $\n";
	}
	amount=qty*price;
	cout << "Amount : " << amount << "$\n";
	if (amount<50){
		vat = 0;
		vat = amount * 0.00;
		cout << "Vat : " << vat << "$\n";
	} else if (amount>50 || amount<=800){
		vat = 10;
		vat= amount * 0.1;
		cout << "Vat : " << vat << "$\n";
	} else if (amount > 800){
		vat = 20;
		vat = amount * 0.2;
		cout << "Vat : " << vat << "$\n";
	}
	total = amount - vat;
	cout << "Total : " << total << "$";
	return 0;
}
