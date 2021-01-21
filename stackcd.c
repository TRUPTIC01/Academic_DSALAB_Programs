#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 5

int item;
int s[8];
int top;

void push() 
{ 
	/*stack overflow*/ 
	if(top == STACK_SIZE-1)
        { 
		printf("Stack Overflow\n");
		return;
	} 
	s[++top] = item;
} 

int pop() 
{ 
	int item_deleted;
	/*Stack underflow*/ 
	if(top == -1) 
	return 0;
	item_deleted = s[top--];
	return item_deleted;
} 

void display()
{ 
	int i;
	if(top ==-1)
	{ 
		printf("Stack is empty\n");
		return;
	} 
	 printf("Contents of Stack\n");
	 for(i=0; i<=top; i++)
		 printf("%d\n",s[i]);
} 

int main() 
{ 
	int choice; 
	
	top = -1; //initial state of stack

	for(;;) 
	{ 
		printf("Stack menu\n\n");
		printf("1: Push\n 2:Pop\n 3:Display\n 4:Exit\n");
		printf("Enter choice\n");
		scanf("%d",&choice);

		switch (choice)
		{ 
			case 1: 
				printf("Enter item to be inserted\n");
				scanf("%d",&item);
				push();
				break;
		       case 2: 
				item=pop();
				if(item ==0)
					printf("stack is empty");
				else
				printf("item deleted = %d\n",item);
				break;
			case 3: 
				display();
				break;
			default:
			     exit(0);
		} 
	} 

	  return 0;
}

