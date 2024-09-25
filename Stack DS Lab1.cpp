#include<stdio.h>
#define SIZE 5
int stack[SIZE];
void push(int);
void pop();
int peek();
void display();



int top=-1;
int main()
{
	int choice,data,r;
	while(1)
	{
	
	printf("\nEnter 1 for Push:\nEnter 2 for Pop:\nEnter 3 for Peek:\nEnter 4 for Display:\nEnter 5 for Exist:\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("Enter data:");
			scanf("%d",&data);
			push(data);
			break;
		case 2:
	        pop();
	        break;
	    case 3:
	    	r=peek();
	    	printf("\n%d is in top",r);
	    	break;
        case 4:
        	display();
        	break;
        case 5:
		printf("Bye Bye Guys");
		return 0;
			}
		 
	}
   
	return 0;
}
	void push(int d)
	{
		if(top==SIZE-1)
		{
			printf("\nStack Overflow");
		}
		else
		{
			top++;
			stack[top]=d;
			printf("\nPush Successfull");
		}
	}
	void pop()
{
	if(top==-1)
	{
		printf("\nstack Underflow");
	}
	else
	{
		printf("\n%d is popped",stack[top]);
		top--;
	}
}
int peek()
{
	if(top==-1)
	{
		printf("\nStack is empty");
	}
	else 
	{
		return stack[top];
	}
}
void display()
{
	if(top==-1)
	{
		printf("\nstack is empty");
	}
	else
	{
		int i;
	    for(i=0;i<=top;i++)
	    {
		printf("\n%d",stack[i]);
        }
	}
}

