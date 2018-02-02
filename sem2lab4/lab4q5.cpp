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
	//stack class storing only the top node and all the functions to operate on the stack;
	public:
	node* top = NULL;
		void push(int a)
		{
		//function puts a node on top of the stack
			node*temp = new node(a);
			if(top == NULL)
			{
				top = temp;
			}else
			{
				temp->next = top;
				top = temp;
			}
			temp = NULL;
		}
		
		node pop()
		{
			//function to take a node off of the top, making top point to top->next and then deleting a temporary pointer containing original top
			node* slider;
			node temp(1);
			if(top == NULL)
			{
				cout<<"stack doesn't contain any elements to pop"; //error message in case top is empty
			}else{
				slider = top;
				top = top->next;
				temp.data = slider->data;			
				delete slider; 
				return temp;
			}
		}
		
		int countItems()
		{
			//fairly obvious counter function
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

class queue
{
	private:
	stack pushst, popst;
	public:
		void qpush(int a)
		{
			pushst.push(a);
		}
		void qpop()
		{
			node temp(1);
			if(popst.top == NULL)
			{
				for(;pushst.top != NULL;)
				{
					temp = pushst.pop();
					popst.push(temp.data);
				}
			}
			popst.pop();
		}
		void qdispush()
		{
			node* slider = pushst.top;
			for(;slider!=NULL;)
			{
				cout<<slider->data<<"->";
				slider= slider->next;
			}
		}
		void qdispop(node* slider)
		{
			if(slider != NULL)
			{
				qdispop(slider->next);
				cout<<slider->data<<"->";
			}
		}
		void qdisp()
		{
			qdispush();
			qdispop(popst.top);
			cout<<"NULL";
		}
};

int main()
{
	int data;
	queue q1;
	cout<<"\nadding 4 nodes\n";
	q1.qpush(1);
	q1.qpush(2);
	q1.qpush(3);
	q1.qpush(4);
	q1.qdisp();
	cout<<"\nadding one more\n";
	q1.qpush(5);
	q1.qdisp();
	cout<<"\ndeleting a node\n";
	q1.qpop();
	q1.qdisp();
	cout<<"\ndeleting everything\n";
	q1.qpop();
	q1.qpop();
	q1.qpop();
	q1.qpop();
	q1.qdisp();
	cout<<"\ntrying to delete more\n";
	q1.qpop();
	return 0;
}
