#include<stdio.h>
#define SIZE 10
int main()
{ 
	int *arrop[3];
	int a=10,b=20,c=40,i;
	arrop[0]=&a;
	arrop[1]=&b;
	arrop[2]=&c;

	for(i=0;i<3;i++)
	{ 
		printf("Address is %p\t value is %d\n",arrop[i],*arrop[i]);
	}

	return 0;
}
