#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	const int size = 20;
	char arr[size],a;
	int i =0;
	char *arrp;
	cout<<"enter name less than 20 chars";
	for( i=0; i <size;i++)
	{
		a = getch();
		arr[i] = a;
		cout<<a;
		if((int)a == 13)
		{
			arr[i] = '\0';
			break;
		}
	}
	cout<<"array output by regular index method\n";
	for(int i=0; i <size;i++)
	{
		cout<<arr[i];
	}
	cout<<"\noutput by pointer \n";
	arrp = arr;
	i =0;
	while (i<size)
	{
		cout<<*arrp;
		arrp++;
		i++;
	}
	return 0;
}
