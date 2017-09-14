#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long int num,x,y,z,i;
	int tri[3];
	cout<<"enter your number ";
	cin>>num;
	for(x = 3; x >= 0; x--)
	{
		y = pow(10,x*3);
		z = num / y;
		if(z!=0)
		{
			for(i = 0; i<3; i++)
			{
				tri[i] = z%10;
				z=z/10;
			}
			for(i = 2; i >= 0; i--)
			{
				if(i == 0)
				{
					if(tri[i+1] != 1)
					{
						switch(tri[i])
						{
							case 1:{
								cout<<" one";
								break;
							}
							case 2:{
								cout<<" two";
								break;
							}case 3:{
								cout<<" three";
								break;
							}case 4:{
								cout<<" four";
								break;
							}case 5:{
								cout<<" five";
								break;
							}case 6:{
								cout<<" six";
								break;
							}case 7:{
								cout<<" seven";
								break;
							}case 8:{
								cout<<" eight";
								break;
							}case 9:{
								cout<<" nine";
								break;
							}
						}
					}
				}
				if(i == 1)
				{
						switch(tri[i])
					{
						case 1:{
							switch(tri[i - 1])
							{
								case 1:{
									cout<<" eleven";
									break;
								}case 2:{
									cout<<" and twelve";
									break;
								}case 3:{
									cout<<" and thirteen";
									break;
								}case 4:{
									cout<<" and fourteen";
									break;
								}case 5:{
									cout<<" and fifteen";
									break;
								}case 6:{
									cout<<" and sixteen";
									break;
								}case 7:{
									cout<<" and seventeen";
									break;
								}case 8:{
									cout<<" and eighteen";
									break;
								}case 9:{
									cout<<" and nineteen";
									break;
								}default :{
									cout<<" and ten";
								}
							}
						
							break;
						}
						case 2:{
							cout<<" and twenty";
							break;
						}
						case 3:{
							cout<<" and thirty";
							break;
						}
						case 4:{
							cout<<" and fourty";
							break;
						}
						case 5:{
							cout<<" and fifty";
							break;
						}
						case 6:{
							cout<<" and sixty";
							break;
						}
						case 7:{
							cout<<" and seventy";
							break;
						}
						case 8:{
							cout<<" and eighty";
							break;
						}
						case 9:{
							cout<<" and ninety";
							break;
						}
					}
				}
				if(i == 2)
				{
						switch(tri[i])
					{
						case 1:{
							cout<<" one hundred";
							break;
						}
						case 2:{
							cout<<" two hundred";
							break;
						}
						case 3:{
							cout<<" three hundred";
							break;
						}
						case 4:{
							cout<<" four hundred";
							break;
						}
						case 5:{
							cout<<" five hundred";
							break;
						}
						case 6:{
							cout<<" six hundred";
							break;
						}
						case 7:{
							cout<<" seven hundred";
							break;
						}
						case 8:{
							cout<<" eight hundred";
							break;
						}
						case 9:{
							cout<<" nine hundred";
							break;
						}
					}
				}
			}
			switch(x)
			{
				case 3:{
					cout<<" billion";
					break;
				}
				case 2:{
					cout<<" million";
					break;
				}
				case 1:{
					cout<<" thousand";
					break;
				}
				default: {
					break;
				}
			}
		}
	}
	return 0;
}
