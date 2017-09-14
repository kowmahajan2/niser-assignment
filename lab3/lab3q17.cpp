#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a,b,c;
	a=b=c=0;
	cout<< "enter quad coefficients";
	cin>>a>>b>>c;
	cout<<"the roots are "<< (-b + pow((b*b - 4*a*c),1/2))/2*a<<"  "<<(-b - pow((b*b - 4*a*c),1/2))/2*a;
	return 0;
}
