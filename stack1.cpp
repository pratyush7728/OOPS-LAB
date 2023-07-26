//implement the operations of stack

#include<iostream>
using namespace std;
#define size 5

int arr[5];
int top=-1;
void push(int data);
void pop();
void display();
void peek();

int main()
{
	push(5);
	push(10);
	push(15);
	display();
	pop();
	display();
	return 0;
}

void push(int data)
{
	if(top==size-1)
	{
		cout<<"Overflow\n";
	}
	else
	{
		
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
