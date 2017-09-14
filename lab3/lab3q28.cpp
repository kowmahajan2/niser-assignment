#include<iostream>

using namespace std;

int main()
{
	int i=2,sum = 0,n;
	cout<<"enter a number";
	cin>>n;
	while(i<n)
	{
		sum = sum +i;
		i = i + 2;
	}
	cout<<sum;
	return 0;
}
