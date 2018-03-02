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
		void topshift(node* shift)		//function required to adjust top node in stack according to the sorted stack
		{
			top = shift;
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
			int b[100], c[100];			//b and c are two different arrays that store greater than and smaller than pivot values
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
			copyarray(a,b,c,k,size);		//this fucntion joins the modified arrays
		}
	}
	
	node* listsort(node* start, node* end)
	{
		node* smallest = start;
		cout<<"\nrec ";
		if(start!=end)
		{
			node *slider = start;
		
			int flag1 = 0, flag2 = 0;
			node* pivot = end;
			slider = start;
			node* prev = NULL;
			while(slider != pivot)
			{
				if(slider->data<=pivot->data)//moves the slider pointer and prev pointer one ahead
				{
					prev = slider;
					slider = slider->next;
					if(flag1 == 0)
					{
						start = prev;
						flag1 = 1;
					}
				}else{						//moves the slider node to the last and places the slider pointer back in its position
					if(prev == NULL)
					{
						prev = slider->next;
						slider->next = end->next;
						end->next = slider;
						end = slider;
						slider = prev;
						prev = NULL;
						start = slider;
					}
					else
					{
						prev->next = slider->next;
						slider->next = end->next;
						end->next = slider;
						end = slider;
						slider = prev->next;
					}
				}
			}
		smallest = listsort(start,prev);
		listsort(slider,end);
		}
		return smallest;
	}
	
};

int main()
{
	node* shift;
	quicksort sort1;
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

	shift = sort1.listsort(s1.top,s1.bottom);
	s1.topshift(shift);

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
