#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a,b,c,d,e,x;
	cout<<"enter marks out of 100  ";
	cin>>a>>b>>c>>d>>e;
	x= a+b+c+d+e;
	cout<<"\ntotal  "<<x;
	cout<<"\npercentage"<<x/5;
	cout<<"\naverage"<<x/5;
	return 0;
}
