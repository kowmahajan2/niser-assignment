#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int dec,oct = 0, y,digit;
	cout<<"enter decimal number";
	cin>>dec;
	
	for(int x = 10; dec > 0; x--)
	{
		if(dec/pow(8,x) >= 1)
		{
			y = pow(8,x);
			digit = dec/y;
			oct = oct*10 + digit;
			dec = dec - digit*y;
		}
	}
	cout<<oct;
	return 0;
}
