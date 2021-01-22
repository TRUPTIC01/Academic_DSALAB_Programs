#include<stdio.h>
int fact (int n)
{ 
	if(n==0)
		return 1;
	return n*fact(n-1);
} 

int main()
{ 
	int n,res;
	printf("Enter the number\n");
	scanf("%d",&n);
	res=fact(n);
	printf("Factorial of %d : %d\n",n,res);
	return 0;
}
