#include<iostream>

using namespace std;

const int size = 50;

class node
{
	private:
		int data;
	public:
		void assign (int a)
		{
			data = a;
		}
		void printdata()
		{
			cout<<data<<"->";
		}
};

class queueLL
{
	private:
	node node1[size];
	int top = -1;
	public:
	void push(int a)
	{
		if(top == size-1)
		{
			cout<<"can not add any more nodes stack overflow!!";
		}
		else{
			top++;
			node1[top].assign(a);
		}
	}
	void pop()
	{
		if(top == -1)
		{
			cout<<"cannot pop nodes stack underflow";
		}else{
			for(int i = 0;i<=top;i++)
			{
				node1[i] = node1[i+1];
			}
			top--;
		}
	}
	
	void display()
	{
		int slide = top;
		for(;slide != -1;slide--)
		{
			node1[slide].printdata();
		}
		cout<<"NULL";
	}
	
};

int main()
{
	queueLL stack1;
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.display();
	cout<<"\nadding one more node\n";
	stack1.push(5);
	stack1.display();
	cout<<"\npopping a node\n";
	stack1.pop();
	stack1.display();
	cout<<"\ndeleting everything";
	stack1.pop();
	stack1.pop();
	stack1.pop();
	stack1.pop();
	stack1.display();
	cout<<"\ntrying to delete more\n";
	stack1.pop();
	cout<<"\nadding 50 nodes\n";
	for(int i = 0; i<50; i++)
	{
		stack1.push(i);
	}
	stack1.display();
	cout<<"\ntrying to add one more\n";
	stack1.push(51);
	return 0;
}
