#include<iostream>

using namespace std;

class node
{
	//fairly obvious node class with integer data and a next pointer
	public:
	int data;
	node* next;
		node(int a)
		{
			data = a;
			next =NULL;
		}
		
};

class stack
{
	//stack class storing top pointers and all possible operations
	node* top = NULL;
	public:
		void push(int a)
		{
//adds a node
			node*temp = new node(a);
			if(top == NULL)
			{
				top = temp;
			}else
			{
				temp->next = top;
				top  = temp;
			}
			temp = NULL;
		}
		
		void pop()
		{
		//removes nide from top
			node* slider = top;
			if(top == NULL)
			{
				cout<<"stack doesn't contain node to delete";
			}else{
				top = top-> next;
				delete slider; 
			}
		}
		
		int countItems()
		{
			/*fairly obvious counter function*/
			int counter;
			node*slider = top;
			for(counter = 0; slider != NULL; counter ++)
			{
				slider = slider->next;
			}
			return counter;
		}
		
		void display()
		{
			//display function similar to counter function
			node*slider = top;
			for(; slider != NULL;)
			{
				cout<<slider->data<<" -> ";
				slider = slider->next;
			}
			cout<<"NULL";
		}
};
int main()
{
	int data;
	stack q1;
	cout<<"\nadding 4 nodes\n";
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	q1.display();
	cout<<"\nadding one more\n";
	q1.push(5);
	q1.display();
	cout<<"\ndeleting a node\n";
	q1.pop();
	q1.display();
	cout<<"\ndeleting everything\n";
	q1.pop();
	q1.pop();
	q1.pop();
	q1.pop();
	q1.display();
	cout<<"\ntrying to delete more\n";
	q1.pop();
	return 0;
}
