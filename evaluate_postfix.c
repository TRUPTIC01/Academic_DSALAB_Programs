#include<stdio.h>
#include<string.h>
#include<math.h>

double compute (char symbol, double op1, double op2)
{ 

	switch(symbol)
	{ 
		case '+':return op1 + op2;
		case '-': return op1 - op2;
		case '*': return op1 * op2;
		case '/': return op1/op2;
		case '^':
		case '$': return pow(op1,op2);
	}
	return 0;
}


int main()
{

	int top,i;
	char symbol;
	char postfix[20];
	double op1,op2,res;
	double s[20];
	
	printf("Enter postfix expression\n");
	scanf("%s",postfix);

	top= -1; //Stack initial state

	for(i=0;i<strlen(postfix);i++)
	{ 
		symbol = postfix[i]; // scan or obtain next character of postfix

		if(symbol>='0' & symbol<= '9')
		s[++top] = symbol-'0'; //push symbol in stack
		else
	       {
		op2 = s[top--]; //pop operands
		op1 = s[top--];
	       

		res= compute(symbol,op1,op2);
		s[++top] = res;// push result into stack
	       }
	}
	
	   res = s[top--]; //obtain result from stack
	   printf("Result is %f\n",res); 


	   return 0;
}


