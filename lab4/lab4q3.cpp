#include<iostream>

using namespace std;

int check(int n,int m)
{
	if(n>=m)
	{
		return n;
	}else{
		return m;
	}
}

int main()
{
	int n,m;
	cout<<"enter two numbers";
	cin>>n>>m;
	cout<<"\nmax number "<<check(n,m);
	return 0;
}
