#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	for(int i=100;i<=300;i++){
		ostringstream num_to_str;
		num_to_str << i;
		string str1 = num_to_str.str();
		int len = str1.length();
		string num1 = str1;
		reverse(str1.begin(),str1.end());
		int count;
		if(num1.compare(str1)==0){
			cout <<str1 << ", ";
		} 
	}	
	return 0;
}
