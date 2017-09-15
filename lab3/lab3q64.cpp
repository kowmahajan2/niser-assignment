#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int octa, store, digit, flag = 0,y,z,sum = 0;
	cout<<"enter a octal number";
	cin>>octa;
	store = octa;
	while(store!=0 && flag ==0)
	{
		digit = store%10;
		store = store/10;
		if(digit >7)
		{
			cout<<" error: enter a proper octal number";
			flag = 1;
		}
		
	}
	z = octa;
	if(flag == 0)
	{
		y = 0;
			while(z!=0)
			{
				digit = z%10;
				z = z/10;
				sum = sum + digit*pow(8,y);
				y++;
			}
			cout<<sum;
	}
	return 0;
}
