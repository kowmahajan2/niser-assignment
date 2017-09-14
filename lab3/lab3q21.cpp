#include<iostream>

using namespace std;

int main()
{
	float cons,bill = 0;
	cout<<"enter consumption in units";
	cin>>cons;
	if(cons>=50)
	{
		bill = bill +50*0.5;
		cons = cons - 50;
		if(cons>=100)
		{
			bill = bill + 100*0.75;
			cons = cons-100;
			if(cons>=100)
			{
				bill = bill + 100*1.20;
				cons = cons-100;
				if(cons>0)
				{
					bill = bill + cons*1.5;
				}
			}
			bill = bill + cons*1.2;
		}
		bill = bill + cons*0.75;
	}
	bill = bill +cons*0.5;
	bill = bill*1.2;
	cout<<"total bill is  "<<bill;
	return 0;
}
