#include<iostream>

using namespace std;

int count;

power(int a, int b, int c = 1)
{
	if ( ::count != b)
	{
		c = c*a;
		::count++;
		power(a,b,c);
	}else {
		return c;
	}
	
}

int main()
{
	int num, expo, result;
	cout<<"enter number followed by the power ";
	cin>>num>>expo;
	::count = 0;
	result = power(num,expo);
	cout<<num<<" raised to the power of "<<expo<< " is "<<result;
	return 0;
}
