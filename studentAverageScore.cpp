#include<iostream>
using namespace std;
int main() {
	double english, chinese, programming, total_score, average, result, grade;
	cout << "Input English subjerct score : ";
	cin >> english;
	cout << "Input Chinese subject score : ";
	cin >> chinese;
	cout << "Input programming subject score : ";
	cin >> programming;
	total_score = english + chinese + programming;
	cout << "\nTotal score : " << total_score;
	average = total_score / 3;
	cout << "\nAverage : " << average;
	cout << "\nResult : ";
	if (average < 50) {
		cout << "Fail";
	} else if (average >= 50) {
		cout << "Pass";
	}
	cout << "\nGrade :";
	if (average < 50) {
		cout << "F";
	} else if (average >= 50 && average <= 60) {
		cout << "E";
	} else if (average > 60 && average <=70) {
		cout << "D";
	} else if (average > 70 && average <=80) {
		cout << "C";
	} else if (average > 80 && average <=97) {
		cout << "B";
	} else  {
		cout << "A";
	}
	return 0;
}
