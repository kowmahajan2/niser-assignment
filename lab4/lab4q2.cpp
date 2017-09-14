#include<iostream>

using namespace std;
float diameter(float n)
{
	float d;
	d = 2*n;
	return d;
}

float area(float n)
{
	float A;
	A = 3.14*n*n;
	return A;
}

float circ(float n)
{
	float circ;
	circ = 2*3.14*n;
	return circ;
}

int main()
{
	float rad;
	cout<<"enter the radius of the circle";
	cin>>rad;
	cout<<"\ndiameter "<<diameter(rad);
	cout<<"\narea "<<area(rad);
	cout<<"\ncircumference "<<circ(rad);
	
	return 0;
}
