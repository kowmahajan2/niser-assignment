#include<iostream>

using namespace std;

int print(int a, int b = 0)
{
	if(b != a)
	{
		cout<<b + 1<<"\n";
		b++;
		print(a,b);
	}else{
		return 0;
	}
}

int main()
{
	int num;
	cout<<"enter number ";
	cin>>num;
	print(num);
	return 0;
}
