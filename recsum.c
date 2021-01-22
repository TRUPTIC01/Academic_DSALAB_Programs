#include<stdio.h>
int sum(int n)
{ 
	if(n==-1)
	return 0;
	return n+sum(n-1);
} 

int main()
{ 
	int n,res,i;
	scanf("%d",&n);
	printf("Enter %d numbers\n",n); 
	for(i=0;i<n;i++)
	{
	 res=sum(n);
	}
	printf("Sum of natural numbers : %d\n",res);
	return 0;
}
