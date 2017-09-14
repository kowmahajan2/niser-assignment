#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int bina, store, compli = 0, compli2 = 0, digit, flag = 0, flag2 = 0;
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
			compli = compli *10;
			store = store - pow(10,i);
		}
		else if (digit ==0)
		{
			compli = compli * 10 + 1;
		}
		}
		cout<<"1's compliment "<<compli;
		store = compli;
		
		for(int i = 0; i<=8; i++)
		{
			digit = store%10;
			store = store / 10;
			if(flag2 == 0 && digit == 0)
			{
				compli2 = compli2 + pow(10,i);
				flag2 = 1;
			}
			else if(flag2 == 1)
			{
				compli2 = compli2 + digit*pow(10,i);
			}
		}
		cout<<"\n2's compliment "<<compli2;
	}
	return 0;
}
