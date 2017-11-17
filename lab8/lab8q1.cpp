#include<iostream>

using namespace std;

struct node
{
	int data;
	public:
		node* next;
		void create(int a);
};

void node::create(int a)
{
	data = a;
	next = NULL;
}

class list
{
	node *head,*tail;
	public:
		list()
		{
			head = NULL;
			tail = NULL;
		}
		void addNode(node ob);
		void insertNode(node ob, int pos);
		void dispList();
		void deleteNode(int pos);
};

void list::addNode(node ob)
{
	node* temp = new node;
	*temp = ob;
	if(head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}else{
		tail->next = temp;
		tail = temp;
		temp = NULL;
	}
	
}

void list::insertNode(node ob, int pos)
{
	node* slider1,*temp = new node,*temp2;
	slider1 = head;
	*temp = ob;
	for(int i = 0; i+2 <= pos; i++)
	{
		if(i+2 == pos)
		{
			if(pos == 1)
			{
				temp->next = head;
				head = temp;
				temp = NULL;
			}else{
				temp2 = slider1->next;
				temp->next = temp2;
				slider1->next = temp;
				temp = NULL;
			}
			
		}
		slider1 = slider1->next;
	}
}

void list::deleteNode( int pos)
{
	node* slider1,*temp;
	node temp1;
	slider1 = head;
	for(int i = 0; i+2 <= pos; i++)
	{
		if(i+2 == pos)
		{
			if(pos == 1)
			{
				temp = head;
				head = head->next;
				delete temp;
			}else{
				temp = slider1->next;
				slider1->next = temp->next;
				delete temp;
			}
			
		}
		slider1 = slider1->next;
	}
}

void list::dispList()
{
	node* slider;
	slider = head;
	while(slider!=NULL)
	{
		cout<<slider->data<<" ";
		slider = slider->next;
	}
}

int main()
{
	node ob1;
	list linked;
	int a,b;
	cout<<"creating new node...\n enter data for new node ";
	cin>>a; 
	ob1.create(a);
	cout<<"\nnode created ...\n adding node";
	linked.addNode(ob1);
	cout<<"\n state of list\n";
	linked.dispList();
	cout<<"\nadding a few more nodes";
	ob1.create(57);
	linked.addNode(ob1);
	ob1.create(53);
	linked.addNode(ob1);
	ob1.create(39);
	linked.addNode(ob1);
	ob1.create(93);
	linked.addNode(ob1);
	ob1.create(17);
	linked.addNode(ob1);
	ob1.create(64);
	linked.addNode(ob1);
	cout<<"\n state of list\n";
	linked.dispList();
	cout<<"\ngive data for another node\n";
	cin>>a;
	cout<<"\nposition to be inserted\n";
	cin>>b;
	cout<<"\nadding node...";
	ob1.create(a);
	linked.insertNode(ob1,b);
	cout<<"\nstate of list\n";
	linked.dispList();
	cout<<"\nposition to be deleted\n";
	cin>>b;
	linked.deleteNode(b);
	cout<<"\nstate of list\n";
	linked.dispList();
	return 0;
}
