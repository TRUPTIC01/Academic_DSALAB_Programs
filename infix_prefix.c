#include<stdio.h>
#include<string.h>

int F(char symbol)
{ 
	switch(symbol)
	{ 
		case '+':
		case '-': return 1;

		case'*':
		case '/': return 3;

		case '^':
		case '$': return 6;

		case ')': return 0;
		case '#':return -1;
		default : return 8;
	} 
}

int G(char symbol)
{ 
	switch(symbol) 
	{ 
		case '+':
		case '-':return 2;

		case '*': 
		case '/':return 4;

		case '^':
		case '$': return 5;

		case ')': return 9;
		case '(' : return 0;

		default: return 7;
	} 
}

char *strrev(char *str)
{
    if (!str || ! *str)
        return str;

    int i = strlen(str) - 1, j = 0;

    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

void infix_prefix(char infix[], char prefix[])
{ 
	int top,i,j;
	char s[20], symbol;
	top = -1; 
	s[++top]='#'; //Initial state of stack

       j= 0; //output is zero

       strrev(infix);

        for(i=0; i<strlen(infix);i++)
	{
	       symbol = infix[i];

	while(F(s[top])> G(symbol))
	{ 
		prefix[j] = s[top--];
		j++;
	}

	if (F(s[top])!=G(symbol))
			s[++top] = symbol;
	else
			top--;
	}
		

	while(s[top] != '#') 
	{
	
	  prefix[j++] = s[top--];

        } 
	 
	prefix[j] ='\0';

	strrev(prefix);
}


int main()
{ 
   char infix[20];
   char prefix[20];

   //Infix
   printf("Enter Infix\n");
   scanf("%s",infix);
   
   infix_prefix(infix,prefix); //conversion from infix to prefix

   //prefix
   printf("Prefix expression\n");
   printf("%s\n",prefix);

   return 0;
}


	  

	


