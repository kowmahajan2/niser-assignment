#include<iostream>

using namespace std;

int main()
{
	float sid1,sid2,sid3;
	cout<<"enter the thre sides of a triangle";
	cin>>sid1>>sid2>>sid3;
	if(sid1 + sid2 > sid3 && sid2 + sid3 > sid1 && sid3 + sid1 > sid2)
	{
		cout<<"the triangle is valid";
	}
	cout<<"the triangle is not valid";
	return 0;
}
