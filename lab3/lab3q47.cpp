#include<iostream>

using namespace std;

int main()
{
	int num, j, flag = 1;
	cout<<"enter a number";
	cin>>num;
		for(j = 2; j < num/2 ; j++)
		{
			if(num%j == 0)
			{
				flag = 0;
			}
		}
		if(flag == 1)
		{
			cout<<num<<" is prime ";
		}else
		{
			cout<<num<<" is not prime";
		}
	return 0;
}
