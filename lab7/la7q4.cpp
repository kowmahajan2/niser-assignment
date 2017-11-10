#include <iostream>

using namespace std;


// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
public:
  // default class constructor (with no arguments):
  Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval);
  void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:
	void Print();
// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
};
// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 
    

//Lab 7 exercise 4.1. Add definition of member function print:
void Point::Print()
{
	int a,b;
	a = Get_X();
	b = Get_Y();
	cout<<"("<<a<<","<<b<<")";
}


// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
class Rectangle
{
	public:
		Rectangle();
		
		Rectangle(Point p1, Point p2);
		
		void Print();
		
		int Area();
	private:
		Point v1,v2,v3,v4;
		int side1();
		int side2();
};
// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************
Rectangle::Rectangle()
{
	Point p1(0,0),p2(0,1),p3(1,1),p4(1,0);
	v1 = p1;
	v2 = p2;
	v3 = p3;
	v4 = p4;
}

Rectangle::Rectangle(Point p1,Point p2)	
	{
			v1 = p1;
			v3 = p2;
			v2.Set_X(v1.Get_X());
			v2.Set_Y(v3.Get_Y());
			v4.Set_X(v3.Get_X());
			v4.Set_Y(v1.Get_Y());
		}

void Rectangle::Print()
{
	cout<<"\nPoint no1 ";
	v1.Print();
	cout<<"\nPoint no2 ";
	v2.Print();
	cout<<"\nPoint no3 ";
	v3.Print();
	cout<<"\nPoint no4 ";
	v4.Print();
}

int Rectangle::side1()
{
	int c = v1.Get_Y() - v2.Get_Y();
	if(c < 0)
	{
		return -c;
	}else{
		return c;
	}
}
int Rectangle::side2()
{
	int c = v2.Get_X() - v3.Get_X();
	if(c < 0)
	{
		return -c;
	}else{
		return c;
	}
}

int Rectangle::Area()
{
	int c = side1()*side2();
	return c;
}
//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 



// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:
	cout<<"\npoint 1";
	p1.Print();
	cout<<"\npoint 2";
	p2.Print();

//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
Rectangle rect1,rect2(p1,p2);
cout<<"\nrectangle no1 ";
rect1.Print();
cout<<"\nrectangle no2 ";
rect2.Print();
cout<<"\narea of rectangle no2 ";
cout<<rect2.Area();

  return 0;
}

//---------------------- point.cpp ------------------------------------//


