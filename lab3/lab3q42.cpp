#include<iostream>

using namespace std;

int main()
{
	int num,power,store = 1;
	cout<<"enter number followed by the power you want to raise it by";
	cin>>num>>power;
	for(int i = 0; i < power; i++)
	{
		store = store*num;
	}
	cout<<store;
	return 0;
}
