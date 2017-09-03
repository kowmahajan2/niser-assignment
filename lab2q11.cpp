#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a,b,c;
	cout<<"enter principle amnt  ";
	cin>>a;
	cout<<"\nenter rate of interest  ";
	cin>>b;
	cout<<"\nenter times compounded  ";
	cin>>c;
	cout<<"\n interest amount is  "<<a*(1+b*c);
	return 0;
}
