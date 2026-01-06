#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
node *front=NULL;
node *rear=NULL;
void enqueue(int v)
{
	node *nn=(node *)malloc(sizeof(node));
	nn->data=v;
	nn->next=NULL;
	if(rear==NULL)
	{
		rear=front=nn;
		return;
	}
	rear->next=nn;
	rear=nn;
}
void dequeue()
{
	if(front==NULL)
	{
		printf("the list is empty");
		return;
	}
	node *temp=front;
	front=front->next;
	free(temp);
	
}
void display()
{
	if(front==NULL)
	{
		printf("the list is empty");
	}
	node *temp=front;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	dequeue();
	display();
}
