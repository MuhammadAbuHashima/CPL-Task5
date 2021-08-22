#include <stdio.h>

struct courses
{
	int Hours;
	float Scores;
};

struct student
{	
	char courses_arr[50]="Mathematics and Programming";
	float GPA;
};
	
int main()
{	
	struct courses Math, Prog;	
	{
		Math.Hours = 3;
		Prog.Hours = 4;
		printf("Enter your score in math (out of 4):\n");
		scanf("%f", &Math.Scores);
		printf("Enter your score in programming (out of 4):\n");
		scanf("%f", &Prog.Scores);
	}
	
	struct student st;
	{
		struct courses;
		st.GPA = ((Math.Hours * Math.Scores) + (Prog.Hours * Prog.Scores))/(Math.Hours + Prog.Hours);
		printf("Your GPA is: %f", st.GPA);
	}
	
	return 0;
}
