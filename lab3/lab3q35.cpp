#include<iostream>

using namespace std;

int main()
{
	int num, n1, store = 0, count;
	cout<<"enter any integer";
	cin>>num;
		count = 0;
		while(num > 0)
		{
			n1 = num%10;
			num = num/10;
			count = count + n1;
		}
		cout<<"\nthe sum of all digits is "<<count;
	return 0;
}
