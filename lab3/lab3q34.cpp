#include<iostream>
#include<math.h>
 using namespace std;
 
int main()
{
	int num,temp,fd,ud,count,finnum;
	cout<<"enter a num";
	cin>>num;
	count = 0;
	temp = num;
	ud = num%10;
	while(temp>=10)
	{
		temp = temp/10;
		count++;
	}
	fd = temp;
	finnum = num-ud+fd;
	temp = pow(10,count);
	finnum = (finnum%temp)+(ud*temp);
	cout<<"\nmodified"<<finnum;
}
