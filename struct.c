#include<stdio.h>
typedef struct  {

	char name [30];
	int roll_no;
	float marks;

} student;

int main() { 

	 struct student s;

	printf("Enter Student information\n");
	printf("Enter name\n");
	scanf("%s",s.name);
	printf("Enter roll_no\n");
	scanf("%d",&s.roll_no);
	printf("Enter marks\n");
	scanf("%f",&s.marks);

	printf("Displaying information\n");
	printf("%s\n",s.name);
	printf("%d\n",s.roll_no);
	printf("%f\n",s.marks);

	return 0;

}
