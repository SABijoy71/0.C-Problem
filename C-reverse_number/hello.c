#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void){

	int num,initial,sum = 0,rem; // rem = remainder,initial = initial value of num;
	printf("Enter any integer number above 10: ");
	fflush(stdout);
	scanf("%d", &num);
	initial = num;

	int i;

	while(initial != 0){

		rem = initial % 10;
		sum = sum * 10 + rem;
		initial /= 10;

	}

	printf("Given number is = %d\n", num);
	printf("reverse digit of this number value is = %d\n", sum);

    return 0;

}

// my last class was 115;
