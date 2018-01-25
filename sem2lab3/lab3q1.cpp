#include<iostream>

using namespace std;

class node
{
	public:
	//fairly obvious node class with integer data and a next pointer
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
	node* head = NULL, *tail = NULL;
	public:
		void insert(int a)
		{
		/*function for adding node at tail end
		with temp pointer holding the new node*/
			node*temp = new node(a);
			if(head == NULL)
			{
				head = temp;
				tail = temp;
			}else
			{
				tail->next = temp;
				temp->prev = tail;
				tail = temp;
			}
			temp = NULL;
		}
		
		void InsertAt(int a, int pos)
		{
			/*function to add node at given position
			slider pointer is used to find the place for insertion*/
			node* temp = new node(a);
			int counter,flag = 0;
			node* slider = head;	
				for(counter = 1 ; counter <= pos; counter++)
				{
					if(counter == pos)
					{
						if(slider == head)
						{
							head = temp;
							temp->next = slider;
							slider->prev = temp;
							flag = 1;
						}else{
							temp -> next = slider;
							temp->prev = slider->prev;
							slider->prev->next = temp;
							slider->prev = temp;
							flag = 1;
						}
					}else if(slider->next == NULL&&counter + 1 == pos)
					{
						temp->prev = slider;
						slider->next = temp;
						tail = temp;
						pos++;
						flag = 1;
					}
					slider = slider->next;
				}
			if(flag == 0)
			{
				cout<<"\nlist is not big enough \n";
			}
		}
		
		void Delete()
		{
			/*function for deleting node at tail end
			fairly similar to insert function but this time we have to start from head*/
			node* slider = head;
			if(head == tail)
			{
				head = NULL;
				tail = NULL;
				delete slider;
			}else{
				slider = tail;
				tail = tail->prev;
				tail->next = NULL;
				delete slider; 
			}
		}
		
		void deleteAt(int pos)
		{
			/*function to delete node from given position
			slider pointer is used to find the place for deletion*/
			int counter,flag = 0;
			node* slider = head;	
				for(counter = 1; counter <= pos||slider != NULL; counter++)
				{
					if(counter == pos)
					{
						if(slider == head)
						{
							head = slider->next;
							head->prev = NULL;
							delete slider;
							flag = 1;
						}else if(slider == tail)
						{
							tail = slider->prev;
							tail->next = NULL;
							delete slider;
							flag = 1;
						}else 
						{
							slider->prev->next = slider->next;
							slider->next->prev = slider->prev;
							delete slider;
							flag = 1;
						}	
					}
					slider = slider->next;
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
