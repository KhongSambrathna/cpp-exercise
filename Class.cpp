#include<iostream>
using namespace std;
class Product {
	//Data Member
	private:
		string itemname;
		int qty;
		double unitprice;
	//Constractor
	public:
		Product() { // Defaul constructor
			itemname = "cocacola";
			qty = 50;
			unitprice = 0.50;
		}
		Product(string itemname, int qty, double unitprice) {
			this->itemname = itemname;
			this->qty = qty;
			this->unitprice = unitprice;
		}
	//Method set
	public:
		void setItemname(string itemname){
			this->itemname = itemname;	
		}
		void setQty(int qty){
			this->qty = qty;
		}
		void setUnitprice(double unitprice){
			this->unitprice = unitprice;
		}
	//Method get
		string getItemname(){
			return itemname;
		}
		int getQty(){
			return qty;
		}
		double getUnitprice(){
			return unitprice;
		}
	//Method dispay
		void display(){	
			cout << itemname << "\t" << qty << "\t" << unitprice << endl;
		}
	//Distractor
		~Product(){
			cout << itemname << " Was Aded. Type any key to exit." << endl;
		}
};
int main() {
	cout << "itemname" << "\t" << "qty" << "\t" << "unitprice" << endl;
	
	//First Product 
	Product p1;
	p1.display();
	//Second Pruduct
	Product p2("Pepsi   ", 90, 0.75);
	p2.display();
	//Third Pruduct
	Product p3("Water   ",20 ,3.00);
	p3.display();
	
	cout << endl;

	return 0;
}
