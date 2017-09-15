#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int store, digit, flag = 0,y = 0,sum = 0,bin =0;
	char hexdec[9] ;
	char *hexpnt;
	
	cout<<"enter a hex number upto FF";
	cin>>hexdec;
	hexpnt = hexdec;
	while(*hexpnt!='\0')
	{
		if(!(((int)*hexpnt>47 && (int)*hexpnt<58)||((int)*hexpnt>64 && (int)*hexpnt<71)||((int)*hexpnt>96 && (int)*hexpnt<103)))
		{
			cout<<" error: enter a proper hexadecimal number";
			flag = 1;
		}
		y++;
		hexpnt++;
		
	}

	hexpnt = hexdec;
	if(flag == 0)
	{
		for(int x =0;*hexpnt != '\0',x<y;x++,hexpnt++)
		{
			if(((int)*hexpnt>47 && (int)*hexpnt<58))
			{
				sum = sum + ((int)*hexpnt - 48)*pow(16,y - x -1);
			}else
			if(((int)*hexpnt>64 && (int)*hexpnt<71))
			{
				sum = sum + ((int)*hexpnt - 55)*pow(16,y - x- 1);
			}else
			if(((int)*hexpnt>96 && (int)*hexpnt<103))
			{
				sum = sum + ((int)*hexpnt - 87)*pow(16,y - x -1);
			}
		}


	}
	if(sum<256)
	{
	
	for(int x = 7; sum > 0; x--)
	{
		if(sum/pow(2,x) >= 1)
		{
			bin = bin*10 + 1;
			sum = sum - pow(2,x);
		}
		else{
		bin = bin *10;
	}
	}
	cout<<bin;
}else{
	cout<<"number is too high";
}
	return 0;
}
