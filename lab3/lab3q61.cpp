#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int bina, store, digit, flag = 0,y,z,sum = 0;
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
	z = bina;
	if(flag == 0)
	{
		y = 0;
			while(z!=0)
			{
				digit = z%10;
				z = z/10;
				sum = sum + digit*pow(2,y);
				y++;
			}
			cout<<sum;
	}
	return 0;
}
