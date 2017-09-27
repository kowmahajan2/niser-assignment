#include<iostream>
#include<string.h>

using namespace std;



int main()
{
	int rec[5] = {23,64,24,46,97};
	int *point;
	point = rec;
	cout<<"ith star"<<*point;
	cout<<"\nwithout star"<<point;
	*point++;
	cout<<"\nafter increment with star";
	cout<<"\nwith star"<<*point;
	cout<<"\nwithout star"<<point;
	point++;
	cout<<"\nafter increment without star";
	cout<<"\nwith star"<<*point;
	cout<<"\nwithout star"<<point;
	return 0;
}
