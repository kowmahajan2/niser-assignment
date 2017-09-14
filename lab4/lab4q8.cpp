#include<iostream>
#include<math.h>

using namespace std;

int checkarmstrong(int i)
{
	int store,count,digit,sum;
	store = i;
	count = 0;
	while(store!=0)
	{
		digit = store%10;
		store = store/10;
		count++;
	}
	store = i;
	sum = 0;
	while(store!=0)
	{
		digit = store%10;
		store = store/10;
		digit = pow(digit,count);
		sum = sum + digit;
	}
	return sum;
}

int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;


	for(int i = 1; i<num; i++)
	{

	if(checkarmstrong(i) == i)
	{
		cout<<i<<" ";
	}
	
	}
	return 0;
}
