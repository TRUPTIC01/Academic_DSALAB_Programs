#include<stdio.h>
int main()
{ 
	union test_1
	{ 
		int x;
		int y;
	}Test_1;

	union test_2
	{ 
		int x;
		char y;
	}Test_2;
	
	union test_3 
	{ 
		int array[10];
		char y;
	}Test_3;

	printf("Test1 size = %lu Test2 Size =%lu  and Test3 Size = %lu\n",sizeof(Test_1),sizeof(Test_2),sizeof(Test_3));
			return 0;
			}

