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
	public:
	//stack class storing top pointers and all possible operations
	node* top = NULL, *bottom = NULL;

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
		void topshift(node* shift)
		{
			top = shift;
		}
};

node* binsearch(node* start,node* end,int key)
{
	if(start != end)
	{
		int mid = 0;
		node* midnode = start, *found;
		for(;midnode!=end;mid++)
		{
			midnode = midnode->next;
		}
		mid++;
		mid = mid/2;
		midnode = start;
		for(int i =0;i<=mid;i++)
		{
			midnode = midnode->next;
		}
		if(midnode->data>key)
		{
			found = binsearch(start,midnode,key);
		}else if(midnode->data<key)
		{
			found = binsearch(midnode,end,key);
		}else{
			found = midnode;
		}
		return found;
	}else{
		return NULL;
	}
	
}

int main()
{
	stack s1;
	s1.push(189);
	s1.push(178);
	s1.push(167);
	s1.push(156);
	s1.push(145);
	s1.push(134);
	s1.push(123);
	s1.push(89);
	s1.push(78);
	s1.push(67);
	s1.push(56);
	s1.push(45);
	s1.push(34);
	s1.push(23);
	node* keyfound;
	keyfound = binsearch(s1.top,s1.bottom,174);
	if(keyfound != NULL)
	{
		cout<<"key found in stack";
	}else{
		cout<<"key not found";
	}
	return 0;
}
