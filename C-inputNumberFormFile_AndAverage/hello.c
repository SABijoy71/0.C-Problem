#include <stdio.h>

int main(){

	FILE *math,*english,*bangla,*average;
	char math_file[] = "math.txt";
	char english_file[] = "english.txt";
	char bangla_file[] = "bangla.txt";
	char average_file[] = "average.txt";

	math = fopen(math_file, "r");
	english = fopen(english_file, "r");
	bangla = fopen(bangla_file, "r");
	average = fopen(average_file, "w");

	int num1,num2,num3,i,n,avg;

	for(i = 1; i <= 10; i++){
		fscanf(math, "%d %d", &n,&num1);
		fscanf(english, "%d %d", &n,&num2);
		fscanf(bangla, "%d %d", &n,&num3);

		avg = (num1+num2+num3)/3;

		fprintf(average, "%d. %d\n",n,avg);

	}

	fclose(math);
	fclose(english);
	fclose(bangla);
	fclose(average);

	return 0;
}