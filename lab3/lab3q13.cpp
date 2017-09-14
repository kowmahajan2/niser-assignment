#include<iostream>

using namespace std;
int main()
{
	unsigned long int amnt;
	int k2 = 0,c5 =0,c2 = 0,c1 = 0,t5 = 0,t2 = 0,t1 = 0,u5 = 0,u2 = 0,u1 = 0;
	cout<<"enter amount of money";
	cin>>amnt;
	if(amnt>=2000)
	{
		k2 = amnt/2000;
		amnt = amnt - 2000*k2;
	}
	if(amnt>=500)
	{
		c5 = amnt/500;
		amnt = amnt - 500*c5;
	}
	if(amnt>=200)
	{
		c2 = amnt/200;
		amnt = amnt - 200*c2;
	}
	if(amnt>=100)
	{
		c1 = amnt/100;
		amnt = amnt - 100*c1;
	}
	if(amnt>=50)
	{
		t5 = amnt/50;
		amnt = amnt - 50*t5;
	}
	if(amnt>=20)
	{
		t2 = amnt/20;
		amnt = amnt - 20*t2;
	}
	if(amnt>=10)
	{
		t1 = amnt/10;
		amnt = amnt - 10*t1;
	}
	if(amnt>=5)
	{
		u5 = amnt/5;
		amnt = amnt - 5*u5;
	}
	if(amnt>=2)
	{
		u2 = amnt/2;
		amnt = amnt - 2*u2;
	}
	if(amnt>=1)
	{
		u1 = amnt/1;
		amnt = amnt - 1*u1;
	}
	cout<<"\n2000 rs notes  \t"<<k2;
	cout<<"\n500 rs notes  \t"<<c5;
	cout<<"\n200 rs notes  \t"<<c2;
	cout<<"\n100 rs notes  \t"<<c1;
	cout<<"\n50 rs notes  \t"<<t5;
	cout<<"\n20 rs notes  \t"<<t2;
	cout<<"\n10 rs notes  \t"<<t1;
	cout<<"\n5 rs notes  \t"<<u5;
	cout<<"\n2 rs notes  \t"<<u2;
	cout<<"\n1 rs notes  \t"<<u1;
	
	return 0;
}
