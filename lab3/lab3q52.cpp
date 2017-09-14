#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int num, store, sum, digit, count = 0;
	cout<<"enter a number";
	cin>>num;
	store = num;

	for(int i = 1; i<num; i++)
	{
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
	if(sum == i)
	{
		cout<<i<<" ";
	}
	
	}
	return 0;
}
