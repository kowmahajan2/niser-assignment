#include<iostream>
#include<string.h>

using namespace std;

class complaint
{
	//fairly obvious complaint class with  and a next pointer
	public:
	char name[50],desc[140];
	long int number;
	complaint* next;
		complaint()
		{
			cout<<"enter name\n";
			gets(name);//two gets because gets is slightly broken
			gets(name);
			cout<<"\nenter description\n";
			gets(desc);
			cout<<"\nenter number\n";
			cin>>number;
			next =NULL;
		}
		
};

class queue
{
	//linked list class storing head and tail pointers and all possible list operations
	complaint* head = NULL, *tail = NULL;
	public:
	int palindrome(char name[])
	{
		int i, length;
	    int flag = 1;
	    
	    length = strlen(name);
	    
	    for(i=0;i < length ;i++)
		{
	        if(name[i] != name[length-i-1])
			{
	            flag = 0;
	            return flag;
	    	}
		}
	}
		void insert()
		{
//function for adding to queue
			complaint*temp = new complaint();
			if(palindrome(temp->name))//palindrome check makes sure that palindromic names get preference
			{
				tail->next = temp;
				tail = temp;
			}else if(head == NULL)
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
//function for removing a dealt with complaint;
			complaint* slider = head;
			if(head == NULL)
			{
				cout<<"queue doesn't contain complaint to delete";
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
			complaint*slider = head;
			for(counter = 0; slider != NULL; counter ++)
			{
				slider = slider->next;
			}
			return counter;
		}
		
		void display()
		{
			//display function similar to counter function
			complaint*slider = head;
			for(; slider != NULL;)
			{
				puts(slider->name);
				cout<<slider->number;
				cout<<"\n";
				puts(slider->desc);
				cout<<" ->\n ";
				slider = slider->next;
			}
			cout<<"NULL";
		}
};



int main()
{
	int flag = 0;
	int choice;
	queue q1;
do
	{
		system("cls");
		cout<<"welcome to your linked list suite\n";
		cout<<"\n what do you want to do??\n";
		cout<<"1. queue a complaint\n";
		cout<<"2. remove a complaint that has been dealt with\n";
		cout<<"3. see all complaints\n";
		cout<<"4. exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:{
				q1.insert();
				break;
			}
			case 2:{
				q1.remove();
				break;
			}
			case 3:{
				q1.display();
				break;
			}
			case 4:{
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
	return 0;
}
