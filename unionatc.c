#include<stdio.h>
union fruits
{ 
	int apple;
	int mango;
	char str [20];
}; 

int main()
{ 
	union fruits f;

	f.apple = 20;
	f.mango = 12;
	strcpy(f.str,"Fruits are delicious");

	printf("There are %d apples and %d mango\n%s\n",f.apple,f.mango,f.str);

	return 0;
}

