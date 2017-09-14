#include<iostream>

using namespace std;

int main()
{
	float ang1,ang2,ang3;
	cout<<"enter the thre angles of a triangle";
	cin>>ang1>>ang2>>ang3;
	if(ang1 + ang2 + ang3 == 180)
	{
		cout<<"the triangle is valid";
	}
	cout<<"the triangle is not valid";
	return 0;
}
