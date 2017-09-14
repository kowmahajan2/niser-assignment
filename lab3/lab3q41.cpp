#include<iostream>

using namespace std;

int main()
{
	char ch = 0;
	for(int i = 0; i < 256; i++, ch++)
	{
		cout<<ch<<"  "<<i<<endl;
	}
	return 0;
}
