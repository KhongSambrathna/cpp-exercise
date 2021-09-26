#include<iostream>
#include<algorithm>
using namespace std; 
int main(){
	string num_1=""; cout << "Input number : "; cin >> num_1;
	string num_2=""; cout << "Input other number :"; cin >> num_2;
	
	if(num_1.length()>num_2.length())
	{
		swap(num_1,num_2); //swap value
	}
	
	string total = ""; //For store result of sum.
	
	int carry = 0;
	
	int len_1 = num_1.length(), len_2 = num_2.length();
	
	reverse(num_1.begin(),num_1.end()), reverse(num_2.begin(),num_2.end());
	
	for(int i=0; i<len_1; i++)
	{
		int sum = ((num_1[i]-'0')+(num_2[i]-'0')+carry); // '0' == 48 ASCII NUMBER
		total.push_back(sum%10+'0');
		carry = sum/10;
	}
    for (int i=len_1; i<len_2; i++) 
    { 
        int sum = ((num_2[i]-'0')+carry); 
        total.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
	if(carry)
	{
		total.push_back(carry+'0');
		reverse(total.begin(),total.end());
	}


	cout << total;
return 0;
} 
