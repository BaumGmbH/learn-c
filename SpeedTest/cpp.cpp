#include <stdio.h>
#include <time.h>
#include <math.h>

char sumArray(char array[], long index) {
	char sum = (char) 0;

	for (long i = 0; i < index; i++) {
		sum += array[i];
	}

	return sum;
}

int main(int argc, char *argv) {
	clock_t start, end;
	
	char array[32768];

	start = clock();

	for (long i = 0; i < sizeof(array); i++) {
		array[i] = sumArray(array, i);
	}

	end = clock();

	printf("%f Sekunden", ((double) (end - start)) / (double) CLOCKS_PER_SEC);
}
