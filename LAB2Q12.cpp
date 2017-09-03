#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a,b,c,d;
	cout<<"enter principle amnt  ";
	cin>>a;
	cout<<"\nenter annual rate of interest  ";
	cin>>b;
	cout<<"\nenter times compounded  ";
	cin>>c;
	cout<<"\nenter years";
	cin>>d;
	cout<<"\n interest amount is  "<<a*pow(1 + b/c,d*c);
	return 0;
}
