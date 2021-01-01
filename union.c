#include<stdio.h>
int main()
{ 
	union student{
		float percentage;
		char grade;
		float marks;
	};
      union student x;

	x.percentage= 99.6;
	printf("%f\n",x.percentage);
	x.grade='A';
	printf("%c\n",x.grade);
	x.marks=100;
	printf("%f\n",x.marks);

	return 0;
}
