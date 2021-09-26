#include<iostream>
using namespace std;
	double salary, tax, salary_after_tax;
void inputSalary(){
	cout << "Input Salary : ";
	cin >> salary;

}
void findTax () {
	if (salary<300){
		tax = 0; 
	} else if (salary<700){
		tax = 0.1; 
	} else if (salary>=700){
		tax = 0.15; 
	}
}
void outputTax() {
	cout << "Tax : " << tax * 100 << "%" << endl;
}
double findSalaryAfterTax(){
	return salary_after_tax = salary * (1-tax);
}
void outputFinalSalary() {
	cout << "Final Salary : " << salary_after_tax << "%";
}
int main() {
	
	inputSalary();
	findTax();
	outputTax();
	double finalSalaryAfterTax = findSalaryAfterTax();
	outputFinalSalary();
	return 0;
}
