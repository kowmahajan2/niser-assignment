#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int dec,bin = 0;
	cout<<"enter decimal number";
	cin>>dec;
	
	for(int x = 7; dec > 0; x--)
	{
		if(dec/pow(2,x) >= 1)
		{
			bin = bin*10 + 1;
			dec = dec - pow(2,x);
		}
		else{
		bin = bin *10;
	}
	}
	cout<<bin;
	return 0;
}
