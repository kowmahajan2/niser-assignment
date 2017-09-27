#include<iostream>

using namespace std;

void putarr(int *arr, int len)
{
	if(len != 0)
	{
		cout<<*arr;
		*arr++;
		len--;
		putarr(arr,len);
	}
}

int getarr(int *arr, int len = 0)
{
	char choice;
	if(len != 50)
	{
		cin>>*arr;
		*arr++;
		len++;
		cout<<"do you wanna enter more?(y/n)";
		cin>>choice;
		if(choice == 'y'|| choice == 'Y')
		{
			getarr(arr,len);
		}
		else
		{
			return len;
		}
	}
}

int main()
{
	int rec[50], len = 0;
	cout<<"enter a integer array max 50 elements";
	len = getarr(rec);
	putarr(rec,len);
	return 0;
}
