#include<iostream>

using namespace std;

int print(int a, int b )
{
	if(b <= a)
	{
		cout<<b<<"\n";
		b = b + 2;
		print(a,b);
	}else{
		return 0;
	}
}

int main()
{
	int min, max;
	char choice;
	cout<<"enter number range ";
	cin>>min>>max;
	cout<<"\npress e if you want even numbers or o if you want odd numbers";
	cin>>choice;
	if(choice == 'e'||choice == 'E')
	{
		if(min %2 ==0)
		{
			print(max,min);
		}
		else
		{
			print(max,min + 1);
		}
	}
	else if(choice == 'o'||choice == 'O')
	{
		if(min %2 ==0)
		{
			print(max,min + 1);
		}
		else
		{
			print(max,min);
		}
	}
	return 0;
}
