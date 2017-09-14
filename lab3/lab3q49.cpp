#include<iostream>

using namespace std;

int main()
{
	int num, i, j, flag = 0, count = 0;
	cout<<"enter a number";
	cin>>num;
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
			count = count + i;
		}
	}
	cout<<count;
	return 0;
}
