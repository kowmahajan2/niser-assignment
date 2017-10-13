#include<iostream>

using namespace std;

int sumarr(int arr[], int size)
{
	int sum =0;
	for(int i = 0; i<size; i++)
	{
	
		sum = sum + arr[i];
	}
	return sum;
}

int main()
{
	const int size = 5;
	int arr[size], sum;
	for(int i = 0; i<size; i++)
	{
		arr[i] = 0;
	}
	cout<<"enter array ";
	for(int i = 0; i<size; i++)
	{
		cin>>arr[i];
	}
	sum = sumarr(arr,size);
	cout<<"the sum "<<sum;
	return 0;
}
