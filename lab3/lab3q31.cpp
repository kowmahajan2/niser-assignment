#include<iostream>

using namespace std;

int main()
{
	int store,count = 0;
	cout<<"enter an integer";
	cin>>store;
	while(store > 0)
		{
			store = store/10;
			count ++;
		}
		cout<<"number of digits in you inteeger is"<<count;
	return 0;
}
