#include<iostream>

using namespace std;

int main()
{
	unsigned int num1;
	cout<<"enter number for examination";
	cin>>num1;
	if(num1==0)
	{
		cout<<"really... number is neither even nor odd";
	}
	else if(num1%2==0)
	{
		cout<<"number is even";
	}
	else
	{
		cout<<"number is odd";
	}
	return 0;
}
