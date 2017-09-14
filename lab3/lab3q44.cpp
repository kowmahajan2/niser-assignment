#include<iostream>

using namespace std;

int main()
{
	int num, n1, count = 1;
	cout<<"enter any integer";
	cin>>num;
		count = 1;
		for(n1 = 1; n1 <= num; n1++)
		{
			count = count*n1;
		}
		cout<<"\nfactorial "<<count;
	return 0;
}
