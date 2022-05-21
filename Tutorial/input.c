#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int age;
	double gpa;
	char name[20];

	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your GPA: ");
	scanf("%lf", &gpa);
	printf("Enter your name: ");
	fgets(name, 20, stdin); // Doesnt work for some reason
	
	printf("You are %d years old.", age);
	printf("You have a GPA of %f.", gpa);
	
	return 0;
}
