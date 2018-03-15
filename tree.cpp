#include<iostream>

using namespace std;

class add
{
	public:
	node *nextnd;
	add *next;
	add(node *a)
	{
		nextnd = a;
		next = NULL;
	}
}

class adbook
{
	//stack class storing top pointers and all possible operations
	add* top = NULL, *bottom = NULL;
	public:
		void push(node *a)
		{
//adds a node
			node*temp = new add(a);
			if(top == NULL)
			{
				top = temp;
				bottom = temp;
			}else
			{
				temp->next = top;
				top  = temp;
			}
			temp = NULL;
		}
		
		node* pop()
		{
		//removes nide from top
			node* ret;
			node* slider = top;
			if(top == NULL)
			{
				cout<<"stack doesn't contain node to delete";
			}else{
				top = top-> next;
				ret = slider->nextnd;
				delete slider; 
			}
			return ret;
		}
		
		void insert(node *a)
		{
//adds a node
			node*temp = new node(a);
			if(top == NULL)
			{
				top = temp;
				bottom = temp;
			}else
			{
				bottom->next = temp;
				bottom = temp;
			}
			temp = NULL;
		}
		
		node* remove()
		{
			node *temp = bottom;
			node *slider = top;
			while(slider->next!=bottom)
			{
				slider = slider->next;
			}
			bottom = slider;
			node *ret = temp->data;
			delete temp;
			return ret;
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

class node
{
	//fairly obvious node class with integer data and a next pointer
	public:
	int data;
	adbook* next;
		node(int a)
		{
			data = a;
			next =NULL;
		}
		
};

class tree
{
	//stack class storing top pointers and all possible operations
	node* root = NULL;
	public:
		void push(int a)
		{
//adds a node
			node*temp = new node(a);
			if(top == NULL)
			{
				top = temp;
				bottom = temp;
			}else
			{
				temp->next = top;
				top  = temp;
			}
			temp = NULL;
		}
		
		int pop()
		{
		//removes nide from top
			int ret;
			node* slider = top;
			if(top == NULL)
			{
				cout<<"stack doesn't contain node to delete";
			}else{
				top = top-> next;
				ret = slider->data;
				delete slider; 
			}
			return ret;
		}
		
		void insert(int a)
		{
//adds a node
			node*temp = new node(a);
			if(top == NULL)
			{
				top = temp;
				bottom = temp;
			}else
			{
				bottom->next = temp;
				bottom = temp;
			}
			temp = NULL;
		}
		
		int remove()
		{
			node *temp = bottom;
			node *slider = top;
			while(slider->next!=bottom)
			{
				slider = slider->next;
			}
			bottom = slider;
			int ret = temp->data;
			delete temp;
			return ret;
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
		void stackrev()
{
	node* slider = top;
	node *ahead = slider->next;
	node *last = bottom;
	bottom = slider;
	top = last;
	while(slider != last)
	{
		slider->next = last->next;
		last->next = slider;
		slider = ahead;
		ahead = ahead->next;
	}
	
}
};
