#include<iostream>

using namespace std;

int sumarr(int *arr, int len)
{
	int res = 0;
	if(len != 0)
	{
		res = res + *arr;
		*arr++;
		len--;
		sumarr(arr,len);
	}
	return res;
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
	int rec[50], len = 0, res;
	cout<<"enter a integer array max 50 elements";
	len = getarr(rec);
	res = sumarr(rec,len);
	cout<<"sum of elements of array is "<<res;
	return 0;
}
