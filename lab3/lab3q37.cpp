#include<iostream>

using namespace std;

int main()
{
	int num, rev = 0;
	cout<<"enter a number";
	cin>>num;
	int store = num;
	while(store > 0)
	{
		rev = rev*10 +(store%10);
		store = store/10;
	}
	cout<<"reverse of your number is "<<rev;
	return 0;
}
