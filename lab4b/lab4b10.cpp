#include<iostream>

using namespace std;

int fibb(int c, int a = 0, int b = 1)
{
	int res;
	a = a+b;
	c--;
	if(c!=0)
	{
		res = fibb(c,b,a);
	}
	else
	{
		return a;
	}
	return res;
}

int main()
{
	int num, res;
	cout<<"enter a number maximum 47";
	cin>>num;
	res = fibb(num - 2);
	cout<<"\nthe "<<num<<"th element of the fibonacci series where the first is 0 is  "<<res;
	return 0;
}
