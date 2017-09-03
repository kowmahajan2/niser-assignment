#include<iostream>

using namespace std;

int main()
{
	int days,years,weeks;
	cout<<"enter number of days";
	years = days/365;
	days = days-years*365;
	weeks = days /7;
	days = days - weeks *7;
	cout<<"\nyears  "<<years<<"  weeks  "<<weeks<<"  days  "<<days;
	return 0;
}
