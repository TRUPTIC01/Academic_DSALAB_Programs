#include<stdio.h>
#include<stdlib.h>

int main()
{ 
	int i,n;
	int *ptr;

	printf("Enter number of elements\t");
	scanf("%d",&n);

	ptr = (int*) malloc (sizeof(int)*n);

	if(ptr==NULL)
	{ 
		printf("Insufficient memory\n");
		return 0;
	} 

	//Read N elements
	printf("Enter N elements\n");
	for(i=0;i<n;i++)
		scanf("%d",ptr+i);
	printf("given elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\n",*(ptr+i));
	return 0;
} 



