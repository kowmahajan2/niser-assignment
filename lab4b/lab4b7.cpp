#include<iostream>

using namespace std;

void reverse(int a, int &b)
{
	if(a != 0)
	{
		b = b*10 + a%10;
		a = a/10;
		reverse(a,b);
	}
}

int main()
{
	int num, rev = 0;
	cout<<"enter a number";
	cin>>num;
	reverse(num,rev);
	if(rev == num)
	{
		cout<<"number is a palindrome ";
	}
	else
	{
		cout<<"the number is not a pallindrome";
	}
	return 0;
}
