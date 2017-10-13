#include<iostream>

using namespace std;

float mean(float arr[], int size)
{
	float sum =0;
	for(int i = 0; i<size; i++)
	{
	
		sum = sum + arr[i];
	}
	sum = sum/size;
	return sum;
}

int mode(float arr[], int size)
{
	int mode =0,prev,prevmode = 0,mark = 0;
	prev = arr[0];
	for(int i = 0; i<size; i++)
	{
		if(prev == arr[i])
		{
			mode++;
		}
			if(mode > prevmode)
			{
				prevmode = mode;
				mode =1;
				mark = i-1;
			}
		prev = arr[i];
		
	}
	return mark;
}

float median(float arr[], int size)
{
	int median;
	if(size%2 == 0)
	{
		median = (arr[(size)/2] + arr[(size - 2)/2 ])/2;
	}
	else{
		median = arr[size/2];
	}
	return median;
}

int main()
{
	const int size = 5;
	float arr[size], sum;
	int temp,flag =0;
	for(int i = 0; i<size; i++)
	{
		arr[i] = 0;
	}
	cout<<"enter array ";
	for(int i = 0; i<size; i++)
	{
		cin>>arr[i];
	}
	do
	{
		flag = 0;
		for(int i = 0; i <size; i++)
		{
			if(arr[i]<arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				flag =1;
			}
		}
	}while(flag == 1);
	sum = mean(arr,size);
	cout<<"the maximum element is "<<arr[0]<<"\n";
	cout<<"the minimum element is "<<arr[size-1]<<"\n";
	cout<<"the mean is "<<mean(arr,size)<<"\n";
	int ind =mode(arr,size);
	cout<<"the mode is "<<arr[ind]<<"\n";
	cout<<"the median is "<<median(arr,size)<<"\n";
	return 0;
}
