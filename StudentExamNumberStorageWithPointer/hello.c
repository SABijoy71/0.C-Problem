#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

	 int **ara, num[12];
	 int i,j, total_classes, n;

	 printf("Enter the total number of classes: ");
	 fflush(stdout);
	 scanf("%d", &total_classes);
	 ara = (int**)malloc(sizeof(int)*total_classes);
	 if(ara == NULL){
	 	printf("Memory allocation failed.\n");
	 	return 1;
	 }

	 for(i = 0; i < total_classes; i++){
	 	printf("Enter number of student for class %d: ", i+1);
	 	fflush(stdout);
	 	scanf("%d", &n);
	 	num[i] = n;
	 	ara[i] = (int*)malloc(sizeof(int)*n);
	 	if(ara == NULL){
	 		printf("Memory allocation failed.\n");
	 		return 1;
	 	}
	 	for(j = 0; j < num[i]; j++){
	 		printf("Enter result for student %d: ", j+1);
	 		fflush(stdout);
	 		scanf("%d", &ara[i][j]);
	 	}
	 }

	 // Output result;
	 printf("Output\n");
	 for(i = 0; i < total_classes; i++){
	 	printf("Class %d: ", i+1);
	 	for(j = 0; j < num[i]; j++){
	 		printf("%d ", ara[i][j]);
	 	}
	 	printf("\n");
	 }

	return 0;
}