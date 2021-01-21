#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define STACK_SIZE 6

int top,item;
char str[20];
char s[20];

void push()
{ 
	/*stack overflow*/
	if (top == STACK_SIZE-1)
		printf("Stack overflow\n");
	s[++top] = item;
} 

int pop() 
{ 
	int item_deleted;
	if(top==-1) //stack underflow
		return 0;
	item_deleted= s[top--];
	return item_deleted;
} 

void display() 
{ 
	int i;
	/*empty stack*/
	if(top==-1)
	{
		printf("Stack is empty\n");
		return;
	} 

	printf("Contents of stack\n");
        for(i=0;i<=top;i++)
		printf("%d\n",s[i]);
} 
 
int is_palindrome(char str[20]) 
{ 
	int i;
	char rev_item;
	top=-1; 

	for(i=0;i<strlen(str);i++)
		s[++top] = str[i];
		
	for (i=0;i<strlen(str);i++)
	{ 
		rev_item = s[top--];
		if (str[i]!=rev_item)
			return 0;
	} 
	return 1;
} 

int main() 
{ 
	int choice,flag; 
	top = -1;

	for(;;) 
	{ 
		printf("Enter menu\n");
		printf("1:push\n 2:pop\n 3:display\n 4:palindrome\n 5:exit\n");
		printf("Enter choice\t");
			scanf("%d",&choice);

		switch (choice)
		{ 
			case 1:
				printf("Enter item to be inserted\n");
				scanf("%d",&item);
				push();
				break;

			case 2: 
				item = pop();
				if (item == 0)
					printf("Stack is empty\n");
				else
					printf("item deleted = %d\n",item);
				break;

			case 3:
				display();
				break;

			case 4:

			printf("Enter String\n");
			scanf("%s",str);

			flag=is_palindrome(str);


			if(flag==0)
				printf("String is not palindrome\n");
			else
				printf("String is palindrome\n");
			  break;

			default:
			  exit(0);

		} 
	}

	return 0;
}

