#include<iostream>

using namespace std;

int main()
{
	float num1;
	cout<<"enter number for examination";
	cin>>num1;
	if(num1%5==0&&num1%11==0)
	{
		cout<<"number is divisible by 11 & 5";
	}
	else
	{
		cout<<"number is not divisible by 11 & 5";
	}
	return 0;
}
