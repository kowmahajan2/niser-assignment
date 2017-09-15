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
			cout<<" error: enter a proper binary number";
			flag = 1;
		}
		
	}

	z = octa;
	if(flag == 0)
	{
		sum = 0;
			for(int x = 3; x>=0; x--)
			{
				sum = 0;
				y = pow(10,x);
				digit = z/y;
				z = z%y;
				for(int j = 2; j>=0; j--)
				{
					
					if(digit/pow(2,j) >= 1)
					{
						cout<<"1";
						digit = digit - pow(2,j);
					}else
					{
						cout<<"0";
					}
					
				}
				
			}
	}
	return 0;
}
