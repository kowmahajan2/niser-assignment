#include<iostream>

using namespace std;

int main()
{
	int num, i, sum = 0;
	cout<<"enter a number";
	cin>>num;
	for(i =1;i<=num/2;i++)
	{
		if(num%i ==0)
		{
			sum = sum + i;
		}
	}
	if(sum == num)
	{
		cout<<"number is perfect";
	}
	else
	{
		cout<<"number is imperfect";
	}
	return 0;
}
