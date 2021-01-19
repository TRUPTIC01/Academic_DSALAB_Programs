#include<stdio.h>
int main()
{ 
	int a = 5;
	int *b;
	b = &a;
	int **c;
	c = &b;

	printf("value of a = %d\n",a);
	printf("value of a = %d\n",*(&a));
	printf("value of a = %d\n",*b);
	printf("valie of a = %d\n",**c);
	printf("value of b= adress of a = %p\n",b);
	printf("value of c= address of b = %p\n",c);
	printf("address of a = %p\n",&a);
	printf("address of a = %p\n",b);
	printf("address of a = %p\n",*c);
	printf("address of b = %p\n",&b);
	printf("address of b = %p\n",c);
	printf("adress of c = %p\n",&c);

	return 0;
}
