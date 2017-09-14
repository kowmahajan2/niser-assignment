#include<iostream>

using namespace std;

int main()
{
	int num1, num2, rem, flag = 0,prod;
	cout<<"enter two numbers";
	cin>>num1>>num2;
	prod = num1*num2;
	if(num2>num1)
	{
		rem = num1;
		num1 = num2;
		num2 = rem;
	}
	while(flag ==0)
	{
		rem = num1%num2;
		if(rem == 0)
		{
			flag = 1;
			break;
		}
		num1 = num2;
		num2 = rem;
	}
	cout<<"lcm is "<<prod/num2;
	return 0;
}
