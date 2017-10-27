#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	const int size = 20;
	char str1[size];
	int i = 0,j = 0;
	char *a;
	gets(str1);
	a = str1;
	for(int i = 0;i<size;i++)
	{
		j = i;
		for(;j<size;j++)
		{
			cout<<*(a + j);
		}
		cout<<"\n";
	}
	return 0;
}
