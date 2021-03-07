#include<stdio.h>

int binarysearch(int key,int a[],int n)
{ 
	int low=0,high=n-1,mid;

	while(low<=high)
	{ 
		mid=(low+high)/2;
		if(key==a[mid]) return mid;
		if(key<a[mid]) high=mid-1;
		if(key>a[mid]) low=mid+1;
	} 
	return -1;
} 

int main()
{ 
	int n,a[10], pos,key,i;
	printf("Enter number of elements\t");
	scanf("%d",&n);
	printf("Enter Elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter item to be searched\t");
	scanf("%d",&key);

	pos = binarysearch(key,a,n);

	if(pos==-1)
		printf("Item not found\n");
	else
		printf("Item found\n");
	return 0;
} 

