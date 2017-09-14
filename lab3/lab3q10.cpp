#include<iostream>
#include<ctype.h>

using namespace std;

int main()
{
	char ch;
	cout<<"enter a single character";
	cin>>ch;
	if(isalpha(ch))
	{
		if(isupper(ch))
		{
			cout<<"given character is uppercase";
		}
		cout<<"given character is lowercase";
	}
	cout<<"given character is not an alphabet";
	return 0;
}
