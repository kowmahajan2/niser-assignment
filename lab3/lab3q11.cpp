#include<iostream>


using namespace std;

int main()
{
	int wkday;
	cout<<"input week day number";
	cin>>wkday;
	if(wkday<8 && wkday>0)
	{
		if(wkday==1)
		{
			cout<<"monday";
		}
		if(wkday==2)
		{
			cout<<"tuesday";
		}
		if(wkday==3)
		{
			cout<<"wednesday";
		}
		if(wkday==4)
		{
			cout<<"thursday";
		}
		if(wkday==5)
		{
			cout<<"friday";
		}
		if(wkday==6)
		{
			cout<<"saturday";
		}
		if(wkday==7)
		{
			cout<<"sunday";
		}
	}
	cout<<"a week only has 7 days so...";
	return 0;
}
