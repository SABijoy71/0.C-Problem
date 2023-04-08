#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

	int first,last;
	printf("Enter first number: ");
	fflush(stdout);
	scanf("%d", &first);

	printf("Enter last number: ");
	fflush(stdout);
	scanf("%d", &last);

	int i;
	int count;
	int store;
	for(i = 1;i <= last; i++){

		count = i;
	}

	int sum = ((first+last)*count) / 2;

	printf("The sum of serial number = %d\n", sum);

	return 0;
}