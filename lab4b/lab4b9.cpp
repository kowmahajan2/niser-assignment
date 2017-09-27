#include<iostream>

using namespace std;

void factorial(int a, int &b)
{
	if(a != 0)
	{
		b = b*a;
		a--;
		factorial(a,b);
	}
}

int main()
{
	int num, fact = 1;
	cout<<"enter a number";
	cin>>num;
	factorial(num,fact);
	cout<<"\n factorial of "<<num<<" is "<<fact;
	return 0;
}
