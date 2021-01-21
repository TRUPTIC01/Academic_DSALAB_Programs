#include<stdio.h>
void push(int item,int *top,int s[])
{ 
        int STACK_SIZE;
	scanf("%d\n",&STACK_SIZE);
	/*stack overflow*/
	if(*top == STACK_SIZE-1)
	{ 
		printf("Stack overflow");
		return;
	} 

	*top = *top + 1;
	s[*top] = item;
}

