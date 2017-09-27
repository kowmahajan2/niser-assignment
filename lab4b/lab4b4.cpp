#include<iostream>

using namespace std;

int sumf(int a, int b = 0, int res = 0)
{
	if(b != a)
	{
		res = res + b + 1;
		b++;
		sumf(a,b,res);
	}else{
		return res;
	}
}

int main()
{
	int num, sum;
	cout<<"enter number ";
	cin>>num;
	sum = sumf(num);
	cout<<"sum equals "<<sum;
	return 0;
}
