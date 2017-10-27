#include<iostream>

using namespace std;

int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int *arrp;
	cout<<"array output by regular index method\n";
	for(int i=0; i <10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\noutput by pointer \n";
	arrp = arr;
	int i =0;
	while (i<10)
	{
		cout<<*arrp<<" ";
		arrp++;
		i++;
	}
	return 0;
}
