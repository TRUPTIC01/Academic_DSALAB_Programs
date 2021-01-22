#include<stdio.h>
#include<string.h>
#define STACK_SIZE 100

int s[100];
int top = -1;

void push()
{  
	int item;
	/*Stack overflow*/
	if(top== STACK_SIZE-1)
		printf("Stack overflow");
	s[++top] = item;
} 

int pop()
{ 
	int item_deleted;
	/*Stack underflow*/
	if(top==-1)
		return 0;
	item_deleted = s[top--];
	return item_deleted;
} 

int is_operand(char ch)
{ 
	if(ch>='a'&& ch<='z'||ch>='A' && ch<='Z')
		return 1;
	else
		return 0;
} 

int main()
{ 
	int i;
	float op1,op2,res,m;
	char postfix[20];
	char ch;
	
	printf("Enter postfix expression\n");
	scanf("%s",postfix);

	while(postfix[i]!=0)
	{ 
		ch = postfix[i];
		if(is_operand(ch))
		{ 
			printf("Enter value of %c:",ch);
			scanf("%d",&m);
			push(m);
		} 
		else {
			op2=pop();
		        op1= pop();
			switch(ch)
			{ 
				case '+': res = op1 + op2;
					  push(res);
					  break;
				case '-': res=op1 -op2;
					  push(res);
					 break;
				case '*' : res = op1 * op2;
					   push(res);
					   break;
				case '/': res = op1/op2;
					  push(res);
					  break;
			} 

	} 
		i++;
	}
	  res= pop();
	  printf("The result is %f\n",res);
        return 0;
}

