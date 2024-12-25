#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;
};
typedef struct node node;
node *head = NULL;

void push(int);
void pop();
void peek();
void display();

int main()
{
	int choice,data;
	while(1)
	{
		printf("\nEnter \n1 for push \n2 for pop \n3 for peek \n4 for display \n5 for exit: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the data: ");
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				pop();
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

void push(int data)
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
	printf("\nPush Successfull");
}

void pop()
{
	if(head == NULL)
	{
		printf("\nStack Underflow");
	}
	else
	{
	node *ptr = head;
	head = head->next;
	free(ptr);
	printf("\nPop Successfull");
	}
}

void peek()
{
	if(head == NULL)
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("\nThe top data is %d", head->info);
	}
}

void display()
{
	if(head == NULL)
	{
		printf("\nStack is empty");
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









