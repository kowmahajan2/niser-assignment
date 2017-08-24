
#include<iostream>


using namespace std;

void ioprog()
{
	int a;
	float b;
	double c;
	char d;
	bool e;
	cout<<"\nenter an integer";
	cin>>a;
	cout<<"\nenter a float value, this means you can now use decimals";
	cin>>b;
	cout<<"\nenter a double value";
	cin>>c;
	cout<<"\nenter any character";
	cin>>d;
	cout<<"\nenter a bool value, i.e 0or1 i.e false or true";
	cin>>e;
	cout<<"here are all the values that you entered";
	cout<<"\ninteger value 		: "<<a;
	cout<<"\nfloat value 		: "<<b;
	
	cout<<"\ndouble value 		: "<<c;
	
	cout<<"\ncharacter value 	: "<<d;
	
	cout<<"\nbool value 		: "<<e;
	
	cout<<boolalpha;
	cout<<"\n\nwhat?! dont like just a zero or a one??fine then have it your way : ";
	
	cout<<"\n"<<e<<"\n\n";
	system("pause");
}

void sumfunc()
{
	float a,b;
	cout<<"\n\nenter number one		";
	cin>>a;
	cout<<"\n\nenter second number	";
	cin>>b;
	cout<<"\n\nthe sum of the numbers provided is	:"<<a+b<<"\n\n";
	system("pause");
	
}

void calcul()
{
	float a,c;
	char b;
	cout<<"\n\nenter the expression you want to calculate as <number1> <operation +,-,*,/> <number2>\n\n";
	cin>>a>>b>>c;
		switch (b)	
	{
		case '+':{
			cout<<a<<" "<<b<<" "<<c<<" = "<<a+c;
			break;
		}
		case '-':{
			cout<<a<<" "<<b<<" "<<c<<" = "<<a-c;
			break;
		}
		case '*':{
			cout<<a<<" "<<b<<" "<<c<<" = "<<a*c;
			break;
		}
		case '/':{
			cout<<a<<" "<<b<<" "<<c<<" = "<<a/c;
			break;
		}
	}
	cout<<"\n\n";
	system("pause");
}

void rectper()
{
	float length,breadth;
	cout<<"\n\nenter length for rectangle	";
	cin>>length;
	cout<<"\n\nenter breadth for rectangle	";
	cin>>breadth;
	cout<<"\n\nyour perimeter is  :  "<<2*(length +breadth)<<"\n\n";
	system("pause");
}

void rectar()
{
	float length,breadth;
	cout<<"\n\nenter length for rectangle	";
	cin>>length;
	cout<<"\n\nenter breadth for rectangle	";
	cin>>breadth;
	cout<<"\n\nyour area is	  :  "<<length*breadth<<"\n\n";
	system("pause");
}

void circ()
{
	float r;
	cout<<"\n\nenter the radius of the circle";
	cin>>r;
	cout<<"\n\ndiameter			: "<<2*r;
	cout<<"\n\ncircumference	: "<<2*3.14*r;
	cout<<"\n\narea				: "<<3.14*r*r<<"\n\n";
	system("pause");
}

int main()
{
	int x;
	char choice = 'y';
	do
	{
		system("cls");
		cout<<"\t\t\t\tkaran roll no.1711072\n";
		cout<<"welcome to this assignment program\n\n";
		cout<<"1. Write a C++ program to perform input/output of all basic data types.\n";
		cout<<"2. Write a C++ program to enter two numbers and find their sum.\n";
		cout<<"3. Write a C++ program to enter two numbers and perform all arithmetic operations.\n";
		cout<<"4. Write a C++ program to enter length and breadth of a rectangle and find its perimeter.\n";
		cout<<"5. Write a C++ program to enter length and breadth of a rectangle and find its area.\n";
		cout<<"6. Write a C++ program to enter radius of a circle and find its diameter, circumference and area.\n";
		cout<<"enter question number to see corresponding answers";
		cin>>x;
		switch(x)
		{
			case 1:{
				system("cls");
				ioprog();
				break;
			}
			case 2:{
				system("cls");
				sumfunc();
				break;
			}
			case 3:{
				system("cls");
				calcul();
				break;
			}
			case 4:{
				system("cls");
				rectper();
				break;
			}
			case 5:{
				system("cls");
				rectar();
				break;
			}
			case 6:{
				system("cls");
				circ();
				break;
			}
		}
		system("cls");
		cout<<"press 'y' to continue or press 'n' to exit";
		cin>>choice;
	}while(choice != 'n'&& choice != 'N');
	
}
