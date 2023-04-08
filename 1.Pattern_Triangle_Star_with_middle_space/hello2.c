#include <stdio.h>

int main(void){

	int i,space,row,j,star;
	printf("Enter row: ");
	fflush(stdout);
	scanf("%d", &row);
	// row = 10;

	for(i = 1; i < row; i++){
		for(space = 1; space <= row-i; space++){
			printf(" ");
		}
		for(star = 0; star <= i; star++){
			if(star == 0 || star == i-1){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}

	if(i == row){
		for(j = 1; j <= row; j++){
			printf("* ");
		}
	}
	printf("\n");

	printf("I = %d\n", i);
	


	return 0;
}