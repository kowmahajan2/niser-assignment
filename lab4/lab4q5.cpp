#include<iostream>

using namespace std;

bool checkprime(int num)
{
	int j, flag = 1;
	
	
		for(j = 2; j < num/2 ; j++)
		{
			if(num%j == 0)
			{
				flag = 0;
			}
		}
		if(flag == 1)
		{
			return 1;
		}else
		{
			return 0;
		}
}

bool checkarmstrong(int num)
{
	int store, sum, digit;

	store = num;
	sum = 0;
	while(store!=0)
	{
		digit = store%10;
		store = store/10;
		digit = digit *digit* digit;
		sum = sum + digit;
	}
	if(sum == num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool checkperfect(int num)
{
	int i, sum = 0;

	for(i =1;i<=num/2;i++)
	{
		if(num%i ==0)
		{
			sum = sum + i;
		}
	}
	if(sum == num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	if(checkprime(num))
	{
		cout<< "\nis prime";
	}
	if(checkarmstrong(num))
	{
		cout<<"\n is armstrong";
	}
	if(checkperfect(num))
	{
		cout<<"\n is perfect";
	}
	
	return 0;
}
