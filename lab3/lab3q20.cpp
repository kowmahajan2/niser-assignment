#include<iostream>

using namespace std;

int main()
{
	float salary;
	cout<<"enter salary";
	cin>>salary;
	if(salary<=10000)
	{
		salary = salary + salary*0.2 + salary*0.8;
	}else if(salary<=20000)
	{
		salary = salary + salary*0.25 + salary*0.9;
	}else
	{
		salary = salary + salary*0.3 + salary*0.95;
	}
	cout<<"total salary"<<salary;
	return 0;
}
