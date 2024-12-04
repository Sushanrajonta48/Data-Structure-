//Linear queue
#include<stdio.h>
#define SIZE 5
int linear_queue[SIZE];
int rear=-1,front=-1;
void enqueue(int);
void dequeue();
void front_element();
void display();
int main()
{
	int choice, data;
	while(1)
	{
	printf("\nEnter \n1 for enqueue \n2 for Dequeue \n3 for Front \n4 for Display \n5 for exit ");
	scanf("%d",&choice);
	
	
	 switch(choice)
	  {
	    case 1:
	    printf("\nEnter data:");
	    scanf("%d",&data);
	    enqueue(data);
	    break;
	    
	    case 2:
	    dequeue;
	    break;
	    
	    case 3: 
	    front_element();
	    break;
	    
	    case 4:
	    display();
	    break;
	    
	    case 5:
		printf("\nBye Bye Guys");
		return 0;
	    
    }
   
  } 
   return 0;

}
void enqueue(int data)
{
    if(rear==SIZE-1)
    {
        printf("\nQueue is already full");
        return;
    }
    else if(rear==-1 && front==-1)
    {
        rear=rear+1;
        front=front+1;
    }
    else
    {
        rear=rear+1;
    }
    linear_queue[rear]=data;
    printf("\n%d is enqueued",data);
}
void dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("\nQueue is already empty");
    }
    else if(rear==front)
    {
        printf("\n%d is dequeued successfully", linear_queue[front]);
        rear=-1;
        front=-1;
    }
    else 
    {
        printf("\n%d is dequeued successfully",linear_queue[front]);
        front=front+1;
    }
}
void front_element()
{
    if(rear==-1 && front==-1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\n%d is front successfully", linear_queue[front]);
    }
}
void display()
{
    int i;
    if(rear==-1 && front==-1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\n%d", linear_queue[i]);
        }
    }
 
}