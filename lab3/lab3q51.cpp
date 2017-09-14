#include<iostream>

using namespace std;

int main()
{
	int num, store, sum, digit;
	cout<<"enter a number";
	cin>>num;
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
		cout<<"number is armstrong";
	}
	else
	{
		cout<<"number is not armstrong";
	}
	return 0;
}
