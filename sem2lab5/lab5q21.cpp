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

void copyarray(int a[], int b[], int c[], int k, int size)
{
	for(int i = 0; i<k;i++)
	{
		a[i] = b[i];
	}
	for(int i = k; i<size; i++)
	{
		a[i] = c[i-k];
	}
}

class quicksort
{
	public:

	void arrsort(int a[],int size)
	{
		if(size > 1)
		{
			cout<<"hey";
			int b[100], c[100];
			int pivot;
			int k = 0,j = 0;
			pivot = size/2;
			for(int i = 0; i<size; i++)
			{
				if(a[i] == a[pivot])
				{
					b[k] = a[i];
					k++;
				}
			}
			for(int i = 0;i<size;i++)
			{
				if(a[i] < a[pivot])
				{
					b[k] = a[i];
					k++;
				}else if(a[i]>a[pivot])
				{
					c[j] = a[i];
					j++;
				}
			}
			
			arrsort(b,k);
			arrsort(c,j);
			copyarray(a,b,c,k,size);
		}
	}
	
	void listsort(node * node1,int n)
	{
		
	}
};

int main()
{
	quicksort sort1;
	/*int stacklen;
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
	s1.display();*/
	int arr[]={25,42,45,54,78,55};
	int size;
	size = sizeof(arr)/4;
	cout<<size/4;
	for(int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	sort1.arrsort(arr,size);
	cout<<"hey";
	for(int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
