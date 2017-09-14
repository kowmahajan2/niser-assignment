#include<iostream>

using namespace std;

int checkstrong(int j)
{
	int digit;
	int store = j;
	int sum = 0;
	int count = 1;
	while(store!=0)
	{
		digit = store%10;
		store = store/10;
		count = 1;
		for(int i = 1; i <= digit; i++)
		{
			count = count*i;
		}
		sum = sum + count;
	}
	return sum;
}

int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	for(int j =1; j<num;j++)
	{
	
	if(checkstrong(j) == j)
	{
		cout<<j<<" ";
	}
	}
	return 0;
}
