#include<iostream>

using namespace std;

int main()
{
	int i=1,n,sum=0;
	cout<<"enter a numeber";
	cin>>n;
	while(i<n)
	{
		sum = sum + i;
		i++;
	}
	cout<<sum;
	return 0;
}
