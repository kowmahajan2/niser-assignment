#include<iostream>

using namespace std;

int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	int i = 0,prev = 1, prprev = 0;;
	while(i<num)
	{
		cout<<i<<" ";
		prprev = prev;
		prev = i;
		i = prev + prprev;
	}
	return 0;
}
