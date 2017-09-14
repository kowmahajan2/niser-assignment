#include<iostream>

using namespace std;

int main()
{
	float sid1,sid2,sid3;
	cout<<"enter the thre sides of a triangle";
	cin>>sid1>>sid2>>sid3;
	if(sid1 + sid2 > sid3 && sid2 + sid3 > sid1 && sid3 + sid1 > sid2)
	{
		if(sid1 == sid2 && sid2 == sid3)
		{
			cout<<"the triangle is equillateral";
		}else if(sid1 == sid2 ||sid2 == sid3 || sid1 == sid3)
		{
			cout<<" the triangle is isosceles";
		}else
		{
			cout<<"the triangle is scalene";
		}
	}
	cout<<"the triangle is not valid";
	return 0;
}
