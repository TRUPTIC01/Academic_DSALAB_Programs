#include<stdio.h>
union snacks
{ 
	int chips;
	float calorie;
	char workout[80];
};

int main()
{ 
	union snacks s;

	s.chips = 50;
	printf("I ate %d chips today\n",s.chips);

	s.calorie= 530;
	printf("It had %f calories\n",s.calorie);

	strcpy (s.workout,"I gotta do Workout,damn");
	printf("%s",s.workout);
       
	return 0;
}
