#include<iostream>

using namespace std;

int HCF(int a , int b)
{
	int res;
	a = a%b;
	if(a == 0)
	{
		res = b;
	}
	else
	{
		res = HCF(b,a);
	}
	return res;
}

int main()
{
	int num1, num2, res;
	cout<<"enter two numbers";
	cin>>num1>>num2;
	if(num1>num2)
	{
		res = HCF(num1,num2);
	}
	else
	{
		res = HCF(num2,num1);
	}
	cout<<"\nthe HCF of "<<num1<<" and "<<num2<<" is "<<res;
	return 0;
}
