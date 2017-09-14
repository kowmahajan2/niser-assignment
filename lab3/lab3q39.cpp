#include<iostream>

using namespace std;

int main()
{
	int num, n1, store = 0, count;
	cout<<"enter any integer";
	cin>>num;
	for(int i = 0; i<10; i++)
	{
		store = num;
		count = 0;
		while(store > 0)
		{
			n1 = store%10;
			store = store/10;
			if(n1 == i)
			{
				count ++;
			}
		}
		cout<<"\nfrequency of "<< i <<" in given number is "<<count;
	}
	return 0;
}
