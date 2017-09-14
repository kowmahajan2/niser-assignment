#include<iostream>

using namespace std;

int main()
{
	int num, i, sum = 0, store, count = 1,digit;
	cout<<"enter a number";
	cin>>num;
	for(int j =1; j<num;j++)
	{
	store = j;
	sum = 0;
	count = 1;
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
	if(sum == j)
	{
		cout<<j<<" ";
	}
	}
	return 0;
}
