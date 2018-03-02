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
	void arrsort(int a[],int n)
	{
		int j,flag,i,temp;
		j=n;
		flag = 0;
		for(;j>0&&flag == 0;j--)
		{
			flag = 1;
			for(i=1;i<=j;i++)
			{
				if(a[i]>a[i-1])
				{
					temp = a[i];
					a[i] = a[i-1];
					a[i-1] = temp;
					flag = 0;
				}
			}
		}
	}
	
	void listsort(stack s1, int n)
	{
		node* slider = s1.top;
		int j,flag,i,temp;
		j=n;
		flag = 0;
		while(flag == 0)
		{
			slider = s1.top;
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
	node* shift;
	bubblesort sort1;
	int stacklen;
	stack s1;
	s1.push(74);
	s1.push(73);
	s1.push(28);
	s1.push(85);
	s1.push(35);
	s1.push(75);
	s1.push(28);
	s1.display();
	cout<<"\n";
	stacklen = s1.countItems();

	sort1.listsort(s1,stacklen);

	s1.display();
	int arr[]={83,64,82,34,68,26,48};
	int size;
	size = sizeof(arr)/4;
	cout<<size/4;
	cout<<"\n";
	for(int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	sort1.arrsort(arr,size);
	for(int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0;
}

