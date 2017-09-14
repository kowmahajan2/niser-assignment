#include<iostream>

using namespace std;

int main()
{
	int num, i, j, flag = 0, reduced;
	cout<<"enter a number";
	cin>>num;
	reduced = num;
	for(i = 2; i < num; i++)
	{
		flag=1;
		for(j = 2; j < i/2 ; j++)
		{
			if(i%j == 0)
			{
				flag = 0;
			}
		}
		if(flag == 1)
		{
			if(num % i ==0)
			{
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
