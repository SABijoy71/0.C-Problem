// Home pattern //

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

	int row,col,n;
	n = 5;

	// This part for top double triangle
	for(row = 1; row <= n; row++){
		for(col = 1; col <= n-row; col++){
			printf("  ");
		}
		for(col = 1; col <= row; col++){
			printf("* ");
		}
		for(col = 2; col <= row; col++){
			printf("* ");
		}
		printf("\n");
	}

	// This part for bottom double squre
	for(row = 3; row <= n; row++){
		for(col = 3; col <= n; col++){
			printf("* ");
		}
		for(col = 3; col <= n; col++){
			printf("  ");
		}
		for(col = 3; col <= n; col++){
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}