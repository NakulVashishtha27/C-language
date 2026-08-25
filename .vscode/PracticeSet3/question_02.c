
/*  Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user ?? */


#include <stdio.h>

int main() {
	float marks1, marks2, marks3, total, percentage;

	printf("Enter marks for three subjects: ");
	scanf("%f %f %f", &marks1, &marks2, &marks3);

	total = marks1 + marks2 + marks3;
	percentage = total / 3.0f;

	if (percentage >= 40.0f && marks1 >= 33.0f && marks2 >= 33.0f && marks3 >= 33.0f)
		printf("Pass\n");
	else
		printf("Fail\n");

	return 0;
}
