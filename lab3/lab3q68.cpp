#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int dec, y,digit;
	char hex[9];
	char *hexpnt;
	cout<<"enter decimal number";
	cin>>dec;
	hexpnt = hex ;
	for(int x = 7; x>=0; hexpnt++,x--)
	{
		
			y = pow(16,x);
			digit = dec/y;
			if(digit>=0&&digit<=9)
			{
				*hexpnt = 48 + digit;
			} else if(digit == 10)
			{
				*hexpnt = 'A';
			} else if(digit == 11)
			{
				*hexpnt = 'B';
			} else if(digit == 12)
			{
				*hexpnt = 'C';
			} else if(digit == 13)
			{
				*hexpnt = 'D';
			} else if(digit == 14)
			{
				*hexpnt = 'E';
			} else if(digit == 15)
			{
				*hexpnt = 'F';
			}
			dec = dec - digit*y;
		
	}

	*hexpnt = 0;
	cout<<hex;
	return 0;
}
