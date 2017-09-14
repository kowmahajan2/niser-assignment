#include<iostream>

using namespace std;
 
bool checkprime(int i)
{
		for(int j = 2; j < i/2 ; j++)
		{
			if(i%j == 0)
			{
				return 0;
			}
		}
		return 1;
}

int main()
{
	int num, i;
	cout<<"enter a number";
	cin>>num;
	for(i = 2; i < num; i++)
	{
	
		if(checkprime(i))
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
