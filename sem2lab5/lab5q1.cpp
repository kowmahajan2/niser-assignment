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
	node* top = NULL;

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

class bubblesort
{
	public:
	void arrsort(int a[],int n)		//function for sorting an array
	{
		int j,flag,i,temp;
		j=n;
		flag = 0;
		for(;j>0&&flag == 0;j--)
		{
			flag = 1;
			for(i=1;i<=j;i++)
			{
				if(a[i]>a[i-1]) 	//comparing two elements
				{
					temp = a[i];
					a[i] = a[i-1];
					a[i-1] = temp;
					flag = 0;
				}
			}
		}
	}
	
	void listsort(node * node1,int n)	//function for sorting lists
	{
		cout<<"hey";
		node* slider = node1;
		int j,flag,i,temp;
		j=n;
		flag = 0;
		while(flag == 0)
		{
			slider = node1;
			cout<<"hey";
			flag = 1;
			for(i = 0;i < j && slider->next != NULL;i++)
			{

				if(slider->data < slider->next->data)
				{
					temp = slider->data;
					slider->data = slider->next->data;
					slider->next->data = temp;
					flag = 0;
				}
				slider = slider->next;
			}
			j=i;
		}
	}
};

int main()
{
	bubblesort sort1;
	int stacklen;
	stack s1;
	s1.push(45);
	s1.push(25);
	s1.push(84);
	s1.push(23);
	s1.push(90);
	s1.push(47);
	s1.push(62);
	s1.display();
	cout<<"\n";
	stacklen = s1.countItems();
	sort1.listsort(s1.top,stacklen);
	s1.display();
	return 0;
}
