#include<iostream>

using namespace std;

int main()
{
	int a = 6,b,*p;
	p = &a;
	b = *p;
	cout<<a<<endl<<b<<endl<<*p<<endl;
	a =2;
	b =3;
	cout<<endl<<a<<endl<<b<<endl<<*p<<endl;
	p = &b;
	cout<<endl<<a<<endl<<b<<endl<<*p;
	return 0;
}
