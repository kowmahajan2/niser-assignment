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
	node *top;
	public:
		list()
		{
			top = NULL;
		}
		void push(node ob);
		void dispList();
		void pop();
};

void list::push(node ob)
{
	node* temp = new node;
	*temp = ob;
	if(top == NULL)
	{
		top = temp;
		temp = NULL;
	}else{
		temp->next=top;
		top = temp;
		temp = NULL;
	}
	
}


void list::pop()
{
	node *temp;
	if(top == NULL)
	{
		cout<<"error stack empty";
	}else{
		temp = top;
		top = top->next;
		delete temp;
	}
}

void list::dispList()
{
	node* slider;
	slider = top;
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
	linked.push(ob1);
	cout<<"\n state of stack\n";
	linked.dispList();
	cout<<"\npushing a few more nodes";
	ob1.create(57);
	linked.push(ob1);
	ob1.create(53);
	linked.push(ob1);
	ob1.create(39);
	linked.push(ob1);
	ob1.create(93);
	linked.push(ob1);
	ob1.create(17);
	linked.push(ob1);
	ob1.create(64);
	linked.push(ob1);
	cout<<"\n state of list\n";
	linked.dispList();
	cout<<"\npopping node...\n";
	linked.pop();
	cout<<"\nstate of list\n";
	linked.dispList();
	return 0;
}
