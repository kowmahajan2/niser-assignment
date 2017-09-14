#include<iostream>


using namespace std;

int main()
{
	int mnth;
	cout<<"input month number";
	cin>>mnth;
	if(mnth<13 && mnth>0)
	{
		if(mnth==1||mnth==3||mnth==5||mnth==7||mnth==8||mnth==10||mnth==12)
		{
			cout<<"month has 31 days";
		}else if(mnth==2)
		{
			cout<<"month has 28 days in a regular year and 29 in a leap year";
		}else
		{
			cout<<"month has 30 days";
		}
	}
	cout<<"a year only has 12 months so...";
	return 0;
}
