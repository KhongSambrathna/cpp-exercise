#include<iostream>
using namespace std;
int main() {
	double english, chinese, programming, total_score, average;
	cout<<"Input score for english subject\t\t:";
	cin>>english;
	cout<<"Input score for chinese subject\t\t:";
	cin>>chinese;
	cout<<"Input score for programming subject\t:";
	cin>>programming;
	cout<<"\n-----------------------------------------\n\n";
	total_score = english + chinese + programming;
	cout<<"Total score is \t\t:"<<total_score<<"\n";
	average = 3 / total_score;
	cout<<"Average is \t\t:"<<average;
	return 0;
}
