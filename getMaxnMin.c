/**
Find the largest and smallest numbers of 3 user input numbers.
Done to refresh C programming and show possible answer to brother's homework. 
Created by: Katherine Barsaloux
9/2/2015

*/

#include <stdio.h>

int getMin(int a, int b, int c) {
	int min = 0;

	if (a < b && a < c) {
		min = a;
	}
	else if (b < a && b < c) {
		min = b;
	}
	else {
		min = c;
	}
	return min;
}

int getMax(int a, int b, int c) {
	int max = 0;

	if (a > b && a > c) {
		max = a;
	}
	else if (b > a && b > c) {
		max = b;
	}
	else {
		max = c;
	}
	return max;
}

int main(void) {
	int a;
	int b;
	int c;

	printf("Please enter 3 numbers (integers): \n");
	scanf_s("%d%d%d", &a, &b, &c);

	//test to print out all input numbers
	//printf("%d\n%d\n%d\n", a, b, c);

	//returns the smallest of the 3 number
	printf("Smallest number is %d \n", getMin(a, b, c));

	//returns the largest of the 3 numbers
	printf("Largest number is %d \n", getMax(a, b, c));

	system("pause");
	return 0;
}