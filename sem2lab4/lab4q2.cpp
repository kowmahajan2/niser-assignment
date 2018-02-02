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

class queue
{
	//queue class storing head and tail pointers and all possible operations
	node* head = NULL, *tail = NULL;
	public:
		void insert(int a)
		{
//adds element at start
			node*temp = new node(a);
			if(head == NULL)
			{
				head = temp;
				tail = head;
			}else
			{
				temp->next = head;
				head  = temp;
			}
			temp = NULL;
		}
		
		void remove()
		{
//deletes an element from tail
			node* slider = head;
			if(head == NULL)
			{
				cout<<"queue doesn't contain node to delete";
			}else if(head == tail)
			{
				head = NULL;
				tail = NULL;
				delete slider;
			}else{
				while(slider ->next != tail)
				{
					slider = slider->next;
				}
				tail = slider;
				slider = slider->next;
				tail->next = NULL;
				delete slider; 
			}
		}
		
		int countItems()
		{
			/*fairly obvious counter function*/
			int counter;
			node*slider = head;
			for(counter = 0; slider != NULL; counter ++)
			{
				slider = slider->next;
			}
			return counter;
		}
		
		void display()
		{
			//display function similar to counter function
			node*slider = head;
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
	queue q1;
	cout<<"\nadding 4 nodes\n";
	q1.insert(1);
	q1.insert(2);
	q1.insert(3);
	q1.insert(4);
	q1.display();
	cout<<"\nadding one more\n";
	q1.insert(5);
	q1.display();
	cout<<"\ndeleting a node\n";
	q1.remove();
	q1.display();
	cout<<"\ndeleting everything\n";
	q1.remove();
	q1.remove();
	q1.remove();
	q1.remove();
	q1.display();
	cout<<"\ntrying to delete more\n";
	q1.remove();
	return 0;
}
