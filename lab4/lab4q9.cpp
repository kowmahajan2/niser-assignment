#include<iostream>

using namespace std;

int checkperfect(int j)
{
	int sum = 0;
	
	for(int i =1;i<=j/2;i++)
	{
		if(j%i ==0)
		{
			sum = sum + i;
		}
	}
	return sum;
}

int main()
{
	int num, i, sum = 0;
	cout<<"enter a number";
	cin>>num;
	for(int j=1;j<num;j++)
	{

	if(checkperfect(j) == j)
	{
		cout<<j<<" ";
	}
	}

	return 0;
}
