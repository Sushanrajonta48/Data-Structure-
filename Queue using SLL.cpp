#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;
};
typedef struct node node;
node *head = NULL;

void enqueue(int);
void dequeue();
void peek();
void display();

int main()
{
	int choice,data;
	while(1)
	{
		printf("\nEnter \n1 for enqueue \n2 for dequeue \n3 for peek \n4 for display \n5 for exit: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the data: ");
				scanf("%d",&data);
				enqueue(data);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("\nInvalid Choice");		
		}
	}
	return 0;
}

void enqueue(int data)
{
	node *newnode;
	newnode = (node*)malloc(sizeof(node));
	
	if(newnode == NULL)
	{
		printf("Memory alloction failed.");
		return;
	}
	newnode->info = data;
	newnode->next = head;
	head = newnode;
	printf("\nEnqueue Successfull");
}

void dequeue()
{
	if(head == NULL)
	{
		printf("\nQueue Underflow");
	}
	else if(head->next == NULL)
	{
		printf("\nDequeue Successfull");
		free(head);
		head = NULL;
	}
	else 
	{
	node *ptr1, *ptr2;
	ptr1 = head;
	ptr2 = head;
	
	while(ptr1->next != NULL)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->next;
	}
	ptr2->next =NULL;
	free(ptr1);
	printf("\nDequeue Successfull");
	}
}

void peek()
{
	if(head == NULL)
	{
		printf("\nQueue is empty");
	}
	else
	{
		node *ptr = head;
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		
		printf("\nThe front data is %d", ptr->info);
	}
}

void display()
{
	if(head == NULL)
	{
		printf("\nQueue is empty");
	}
	else
	{
		node *ptr = head;
		printf("\n%d", ptr->info);
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
			printf("\n%d", ptr->info);
		}
	}
}









