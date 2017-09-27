#include<iostream>

using namespace std;

int sumf(int a, int b, int res = 0 )
{
	if(b <= a)
	{
		res = res + b;
		b = b + 2;
		sumf(a,b,res);
	}else{
		return res;
	}
}

int main()
{
	int min, max, sum;
	char choice;
	cout<<"enter number range ";
	cin>>min>>max;
	cout<<"\npress e if you want even numbers or o if you want odd numbers";
	cin>>choice;
	if(choice == 'e'||choice == 'E')
	{
		if(min %2 ==0)
		{
			sum = sumf(max,min);
		}
		else
		{
			sum = sumf(max,min + 1);
		}
	}
	else if(choice == 'o'||choice == 'O')
	{
		if(min %2 ==0)
		{
			sum = sumf(max,min + 1);
		}
		else
		{
			sum = sumf(max,min);
		}
	}
	cout<<"\n sum of those numbers is "<<sum;
	return 0;
}
