#include<iostream>

using namespace std;

int main()
{
	float mark[5];
	char grade[5];
	cout<<"enter marks for the 5 subject";
	cin>>mark[0]>>mark[1]>>mark[2]>>mark[3]>>mark[4];
	for(int i = 0 ; i < 5 ; i++)
	{
		if(mark[i]>=90)
		{
			grade[i] = 'A';
		}else if(mark[i]>=80)
		{
			grade[i] = 'B';
		}else if(mark[i]>=70)
		{
			grade[i] = 'C';
		}else if(mark[i]>=60)
		{
			grade[i] = 'D';
		}else if(mark[i]>=50)
		{
			grade[i] = 'E';
		}else
		{
			grade[i] = 'F';
		}
	}
	cout<<"\ngrades are";
	for(int i = 0; i < 5; i++)
	{
		cout<<"\nmark  "<<i+1<<" "<<grade[i];
	}
	return 0;
}
