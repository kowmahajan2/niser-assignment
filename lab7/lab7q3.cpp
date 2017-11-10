#include<iostream>

using namespace std;

class rectangle{
	double length;
	double breadth;
	public:
		rectangle(double a, double b)
		{
			length = a;
			breadth = b;
		}
		
		double perim()
		{
			double c;
			c = (length + breadth)*2;
			return c;
		}
		double area()
		{
			double c;
			c = length * breadth;
			return c;
		}
};

int main()
{
	double len, bread;
	cout<<"enter length and breadth of the first rectangle ";
	cin>>len>>bread;
	rectangle rect1(len,bread);
	cout<<"\nenter length and breadth of the second rectangle ";
	cin>>len>>bread;
	rectangle rect2(len,bread);
	if(rect1.perim() == rect2.perim())
	{
		cout<<"\n rectangles have equal perimeter "<<rect1.perim();
	}else{
		cout<<"\n rectangles have different perimeters"<<rect1.perim()<<" "<<rect2.perim();
	}
	if(rect1.area() == rect2.area())
	{
		cout<<"\n rectangles have equal area "<<rect1.area();
	}else{
		cout<<"\n rectangles have different area"<<rect1.area()<<"  "<<rect2.area();
	}
	return 0;
}
