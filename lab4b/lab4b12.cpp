#include<iostream>

using namespace std;

int LCM(int a, int b, int c)
{
	int res;
	if(b%a != 0)
	{
		b = b+c;
		res = LCM(a,b,c);
	}
	else
	{
		return b;
	}
	return res;
}

int main()
{
	int num1, num2, res;
	cout<<"eneter two numbers";
	cin>>num1>>num2;
	if(num1>num2)
	{
		res = LCM(num1,num2,num2);
	}
	else
	{
		res = LCM(num2,num1,num1);
	}
	cout<<"\n the LCM of "<<num1<<" and "<<num2<<" is "<<res;
	return 0;
}
