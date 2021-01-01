#include<stdio.h>
int main()
{ 
	typedef union { 

		int marks;
		float percentage;
		char grades;
	} student;

	student x;

	x.marks=100; 
	printf("%d\n",x.marks);

	x.percentage=99.1;
	printf("%f\n",x.percentage);

	x.grades='A';
        printf("%c\n",x.grades);

	return 0;
}

