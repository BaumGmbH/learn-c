#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	double numberA;
	double numberB;

	printf("Please enter the first number: ");
	scanf("%lf", &numberA);
	printf("Please enter the second number: ");
	scanf("%lf", &numberB);

	printf("The result is: %f (%f + %f)", numberA + numberB, numberA, numberB);
	
	return 0;
}

