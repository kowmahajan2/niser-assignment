#include<iostream>

using namespace std;

int main()
{
	int num, i, sum = 0, store, count = 1,digit;
	cout<<"enter a number";
	cin>>num;
	store = num;
	while(store!=0)
	{
		digit = store%10;
		store = store/10;
		count = 1;
		for(i = 1; i <= digit; i++)
		{
			count = count*i;
		}
		sum = sum + count;
	}
	if(sum == num)
	{
		cout<<"number is strong";
	}
	else
	{
		cout<<"number is not strong";
	}
	return 0;
}
