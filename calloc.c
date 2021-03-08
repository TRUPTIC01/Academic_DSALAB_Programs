#include<stdio.h>
#include<stdlib.h>

int main()
{ 
	int *a,i,j,n;
	
	printf("Enter number of elements\t");
	scanf("%d",&n);

	a=(int*)calloc(n,sizeof(int));

	if(a==NULL)
	{ 
		printf("Insufficient memory\n");
		return 0;
	} 

	//Read N elements
	printf("Enter n elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	j=0;
	for(i=1;i<n;i++)
	{ 
		if(a[i]>a[j]) j=i;
	}
		printf("the biggest = %d at pos %d",a[j],j+1); 
		free(a);

	return 0;
}


