//implement the operations of stack

#include<iostream>
using namespace std;
#define size 5

int arr[5];
int top=-1;
void push();
void pop();
void display();
void peek();

int main()
{
	int choice;
	while(1)
	{
		cout<<"Enter choice\n";
		cout<<"1.push\n 2.pop\n 3.display\n 4.peek\n 5.exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: peek();
			break;
			case 5: exit(0);
			break;
			default:cout<<"Invalid input\n";
		}
	}
}

void push()
{
	if(top==size-1)
	{
		cout<<"Overflow\n";
	}
	else
	{
		int data;
		cout<<"Enter data to be insert in stack\n";
		cin>>data;
		top++;
		arr[top]=data;
		cout<<"Insertion complete\n";
	}
}

void pop()
{
 	if(top==-1)
 	{
 		cout<<"Underflow";
 	}
 	else
 	{
 		cout<<"deleted element is "<< arr[top];
 		top--;
 		cout<<"Deletion complete";
 	}
 }
 
 void display()
 {
	if(top==-1)
	{
		cout<<"Empty stack";
	}
	else
	{
		cout<<"Printing stack element:\n";
		for(int i=top;i>=0;i--)
		{
			cout<<arr[i]<<"\t";
		}
	}
}
		
void peek()
{
	cout<<"Topmost element is : \n";
	cout<<arr[top];
}
