#include<iostream>

using namespace std;

void sumd(int a, int &b)
{
	if(a != 0)
	{
		b = b + a%10;
		a = a/10;
		sumd(a,b);
	}
}

int main()
{
	int num, sum = 0;
	cout<<"enter a number";
	cin>>num;
	sumd(num,sum);
	cout<<"\n sum of all digits is "<<sum;
	return 0;
}
