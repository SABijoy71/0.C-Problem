#include <stdio.h>

int main(){

	FILE *input,*output;

	char input_file[] = "input.txt";
	char output_file[] = "output.txt";

	input = fopen(input_file, "w");

	int n1,n2,n3;
	printf("Enter first number: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Enter second number: ");
	fflush(stdout);
	scanf("%d", &n2);

	printf("Enter third number: ");
	fflush(stdout);
	scanf("%d", &n3);

	fprintf(input, "%d %d %d", n1,n2,n3);
	fclose(input);

	input = fopen(input_file, "r");
	output = fopen(output_file, "w");

	int num1,num2,num3,sum;

	fscanf(input, "%d", &num1);
	fscanf(input, "%d", &num2);
	fscanf(input, "%d", &num3);

	sum = num1 + num2 + num3;

	fprintf(output, "Value of %d + %d + %d = %d",num1,num2,num3, sum);

	if(output != NULL){
		printf("Operation successful!");
	}

	fclose(input);
	fclose(output);

	return 0;
}