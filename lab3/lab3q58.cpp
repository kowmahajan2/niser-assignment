#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int bina, store, digit, flag = 0;
	cout<<"enter a binary number";
	cin>>bina;
	store = bina;
	while(store!=0 && flag ==0)
	{
		digit = store%10;
		store = store/10;
		if(digit != 1 && digit != 0)
		{
			cout<<" error: enter a proper binary number";
			flag = 1;
		}
		
	}
	store = bina;
	if(flag == 0)
	{
		for(int i = 7; i>=0; i--)
		{
			digit = store/pow(10,i);
		if (digit == 1)
		{
			cout<<"0";
			store = store - pow(10,i);
		}
		else if (digit ==0)
		{
			cout<<"1";
		}
		}
	}
	return 0;
}
