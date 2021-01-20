#include<stdio.h>
union test
{ 
	int x,y;
};

int main()
{ 
	union test t;
	t.x=2;
	printf("x=%d\t and y=%d\n",t.x,t.y);
	t.y= 8;
	printf("x= %d\t and y= %d\n",t.x,t.y);
	
	return 0;
}
