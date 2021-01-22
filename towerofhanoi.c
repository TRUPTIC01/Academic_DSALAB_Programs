#include<stdio.h>

void transfer(int n,char s,char t,char d)
{ 
	if(n==0)
	return;

	transfer(n-1,s,d,t); //Move n-1 discs from source to temp
       /*nth disc from source to destination*/
	printf("Move disc %d from %c to %c\n",n,s,d);
       transfer(n-1,t,s,d); //n-1 discs from temp to destination
} 

int main()
{ 
	int n;

	printf("Enter number of discs\n");
	scanf("%d",&n);

	/*Transfer of n discs from peg A to C*/
	transfer(n,'A','B','C');
	return 0;
} 
