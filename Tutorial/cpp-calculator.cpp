#include <stdio.h>
#include <stdlib.h>

class Test {
	private:
		double a;
	public:
		Test(double firstNumber) {
			a = firstNumber;
		}
		
		double add(double numberToAdd) {
			return a + numberToAdd;
		}
};

int main(int argc, char const *argv[])
{
	double numberA;
	double numberB;

	printf("Please enter the first number: ");
	scanf("%lf", &numberA);
	printf("Please enter the second number: ");
	scanf("%lf", &numberB);

	Test test = Test(numberA);

	printf("The result is: %f (%f + %f)", test.add(numberB), numberA, numberB);
	
	return 0;
}

