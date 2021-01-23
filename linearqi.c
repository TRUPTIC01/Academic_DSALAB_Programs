#include<stdio.h>
#include<stdlib.h>
#define QUEUE_SIZE 6
int q[30];
int front = -1;
int rear = -1;
void insert_rear()
{  
	int item;
	if(rear==QUEUE_SIZE-1)//Queue Overflow
	{
        	printf("Queue is full\n");
		return;
	}
	q[++rear] = item;
} 

int delete_front()
{ 
	if((front>=rear)||(front==-1&&rear==-1))
	return -1;
	return q[++front];
} 

void display_queue()
{ 
	int i;
	if((front>=rear)||(front==-1&&rear==-1))
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Contents of queue are:\n");
	for(i=front+1;i<=rear;i++)
	{ 
		printf("%d\n",q[i]);
	}
} 


int main()
{ 
	int item,choice;
	int q[20];

	for(;;)
	{ 
		printf("Enter menu\n");
		printf("1:Insert\n2:Delete\n3:Display\n4:Exit\n\n");
		printf("Enter Choice\n");
		scanf("%d",&choice);

		switch(choice)
		{ 
			case 1:
				printf("Enter item to be inserted\n");
				scanf("%d",&item);
				insert_rear();
				break;
			case 2:
				item = delete_front();
				if(item==-1)
				printf("Queue is empty\n");
				else
				   printf("Item deleted =%d\n",item);
				break;
			case 3: 
				display_queue();
				break;
			default: exit(0);
		}

	} 
	return 0;
}


