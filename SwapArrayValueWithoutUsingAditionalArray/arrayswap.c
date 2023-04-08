#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void){
	
	int ara[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int size = sizeof(ara)/sizeof(ara[0]);
	int i,j,temp;

	for(i = 0, j = size-1; i < size; i++, j--){
		if(j < i){
			break;
		}
		// temp = ara[i];
		// ara[i] = ara[j];
		// ara[j] = temp;

		swap(&ara[i], &ara[j]);
	}

	for(i = 0; i < size; i++){
		printf("%d ", ara[i]);
	}

	return 0;
} 
