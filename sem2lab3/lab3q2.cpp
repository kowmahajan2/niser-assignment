#include<iostream>

using namespace std;

class node
{
	public:
	//fairly obvious node class with integer data and a next, previous pointers
	int data;
	node* next, *prev;
		node(int a)
		{
			data = a;
			next = NULL;
			prev = NULL;
		}
		
};

class list
{
	//linked list class storing head and tail pointers and all possible list operations
	node* head = NULL;
	public:
		void insert(int a)
		{
		/*function for adding node just behind head
		with temp pointer holding the new node*/
			node*temp = new node(a);
			if(head == NULL)
			{
				head = temp;
				head->next = head;
				head->prev = head;
			}else
			{
				temp -> next = head;
				temp->prev = head->prev;
				head->prev->next = temp;
				head->prev = temp;
			}
			temp = NULL;
		}
		
		void InsertAt(int a, int pos)
		{
			/*function to add node at given position, it stops once head is reached
			slider pointer is used to find the place for insertion*/
			node* temp = new node(a);
			int counter,flag = 0;
			node* slider = head;	
				for(counter = 1 ; counter <= pos; counter++)
				{
					if(counter == pos)
					{
						
						temp -> next = slider;
						temp->prev = slider->prev;
						slider->prev->next = temp;
						slider->prev = temp;
						flag = 1;
						if(slider == head)
						{
							head = slider->prev;
						}	
					}
					slider = slider->next;
					if(slider == head)
					{
						break;
					}
				}
			if(flag == 0)
			{
				cout<<"\nlist is not big enough \n";
			}
		}
		
		void Delete()
		{
			/*function for deleting node at tail end*/
			node* slider = head;
			if(head != NULL)
			{
				if(head->next == head)
				{
					head = NULL;
					delete slider;
				}else{
					slider = head->prev;
					head->prev = head->prev->prev;
					head->prev->next = head;
					delete slider;
				}
			}else{
				cout<<"list does not exist";
			}
		}
		
		void deleteAt(int pos)
		{
			/*function to add node at given position
			slider pointer is used to find the place for insertion*/
			int counter,flag = 0;
			node* slider = head;	
				for(counter = 1 ; counter <= pos; counter++)
				{
					if(counter == pos)
					{
						if(slider == head)
						{
							head = slider->next;
						}
						slider->next->prev = slider->prev;
						slider->prev->next = slider->next;
						delete slider;
						flag = 1;	
					}
					slider = slider->next;
					if(slider == head)
					{
						break;
					}
				}
			if(flag == 0)
			{
				cout<<"\nlist is not big enough \n";
			}
		}
		
		int countItems()
		{
			/*fairly obvious counter function*/
			int counter;
			node*slider = head;
			for(counter = 0; slider->next != head; counter ++)
			{
				slider = slider->next;
			}
			return counter;
		}
		
		void display()
		{
			//display function similar to counter function
			node*slider = head;
			for(; slider->next != head;)
			{
				cout<<slider->data<<" -> ";
				slider = slider->next;
			}
			cout<<"head";
		}
};

int main()
{
	int data,pos,choice,flag = 0;
	list list1;
	do
	{
		system("cls");
		cout<<"welcome to your linked list suite\n";
		cout<<"\n what do you want to do??\n";
		cout<<"1. insert node at last\n";
		cout<<"2. insert a node at a position\n";
		cout<<"3. delete a node at the end\n";
		cout<<"4. delete a node at a position\n";
		cout<<"5. count nodes\n";
		cout<<"6. display list\n";
		cout<<"7. exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:{
				cout<<"\nenter data for node\n";
				cin>>data;
				list1.insert(data);
				break;
			}
			case 2:{
				cout<<"\nenter data for node\n";
				cin>>data;
				cout<<"\nenter position\n";
				cin>>pos;
				list1.InsertAt(data,pos);
				break;
			}
			case 3:{
				cout<<"\ndeleting node...";
				list1.Delete();
				cout<<"\nnode deleted";
				break;
			}
			case 4:{
				cout<<"\nenter position\n";
				cin>>pos;
				list1.deleteAt(pos);
				cout<<"\nnode deleted\n";
				break;
			}
			case 5:{
				cout<<"\nnumber of nodes is"<<list1.countItems();
				cout<<"\n";
				break;
			}
			case 6:{
				cout<<"\n";
				list1.display();
				break;
			}
			case 7:{
				flag =1;
				break;
			}
			default:{
				cout<<"wrong input\n";
				break;
			}
		}
		cout<<"\n";
		system("pause");
	}while(flag == 0);
}
