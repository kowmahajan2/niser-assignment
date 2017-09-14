#include<iostream>

using namespace std;

int main()
{
	int num, ud, ld;
	cout<<"enter an integer";
	cin>>num;
	ld = num;
	ud = num%10;
	while(ld >= 10)
	{
		ld = ld/10;
	}
	cout<<"your unit digit is "<<ud<<" your last place digit is "<<ld;
	
	return 0;
}
