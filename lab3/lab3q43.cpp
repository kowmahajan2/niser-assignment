#include<iostream>

using namespace std;

int main()
{
	int num, j;
	cout<<"enter a number";
	cin>>num;

		for(j = 1; j <= num ; j++)
		{
			if(num%j == 0)
			{
				cout<<j<<" ";
			}
		}
	
	return 0;
}
