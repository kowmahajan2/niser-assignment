#include<iostream>

using namespace std;

int cube(int n)
{
	int c;
	c = n*n*n;
	return c;
}
int main()
{
	int a;
	cout<<"enter a number";
	cin>>a;
	cout<<"\ncube is "<<cube(a);
	return 0;
}
