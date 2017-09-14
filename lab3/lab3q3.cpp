#include<iostream>

using namespace std;

int main()
{
	float num1;
	cout<<"enter number for examination";
	cin>>num1;
	if(num1>0)
	{
		cout<<"number is positive";
	}
	else if(num1<0)
	{
		cout<<"number is negative";
	}
	else
	{
		cout<<"number is 0";
	}
	return 0;
}
