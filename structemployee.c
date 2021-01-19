#include<stdio.h>
int main()
{ 
	struct employee
	{ 
		int id;
		float salary;
		int mobile;
	};

	struct employee e1,e2,e3;
	printf("Enter Employee details\n");
	scanf("%d%f%d",&e1.id,&e1.salary,&e1.mobile);
	scanf("%d%f%d",&e2.id,&e2.salary,&e2.mobile);
	scanf("%d%f%d",&e3.id,&e3.salary,&e3.mobile);

	printf("Employee informatiom\n");
	printf("%d\t%f\t%d\n",e1.id,e1.salary,e1.mobile);
	printf("%d\t%f\t%d\n",e2.id,e2.salary,e2.mobile);
	printf("%d\t%f\t%d\n",e3.id,e3.salary,e3.mobile);

	return 0;
}
