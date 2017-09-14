#include<iostream>

using namespace std;

int main()
{
	int num, i, sum = 0;
	cout<<"enter a number";
	cin>>num;
	for(int j=1;j<num;j++)
	{
		sum = 0;
	
	for(i =1;i<=j/2;i++)
	{
		if(j%i ==0)
		{
			sum = sum + i;
		}
	}
	if(sum == j)
	{
		cout<<j<<" ";
	}
	}

	return 0;
}
