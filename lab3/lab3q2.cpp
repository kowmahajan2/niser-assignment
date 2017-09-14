#include<iostream>

using namespace std;

int main()
{
	float num1,num2,num3;
	cout<<"enter three numbers";
	cin>>num1>>num2>>num3;
	if(num1>=num2&&num1>=num3)
	{
		cout<<"greatest number is "<<num1;
	}
	else
	{
		if(num3>num2)
		{
			cout<<"\nthe greater number is  "<<num3;
		}
		else
		{
			cout<<"\nthe greater number is  "<<num2;
		}
	}
	return 0;
}
