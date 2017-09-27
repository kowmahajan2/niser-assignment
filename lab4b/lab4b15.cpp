#include<iostream>

using namespace std;

struct minmax
{
	int min , max ;
};

minmax maxmin(int *arr, int len, minmax &obj, int count = 0)
{
	
	if(count == 0)
	{
		obj.min = *arr;
		obj.max = *arr;
		count++;
		obj = maxmin(arr,len,obj,count);
	}
	else if(count <= len)
	{
		if(*arr <= obj.min)
		{
			obj.min = *arr;
		}
		else if(*arr >= obj.max)
		{
			obj.max = *arr;
		}
		count++;
		arr++;
		obj = maxmin(arr,len,obj,count);
	}
	return obj;
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
	minmax obj;
	obj.min = 0;
	cout<<"enter a integer array max 50 elements";
	len = getarr(rec);
	obj = maxmin(rec,len,obj);
	cout<<"\n biggest element"<<obj.max;
	cout<<"\n smallest element"<<obj.min;
	return 0;
}
