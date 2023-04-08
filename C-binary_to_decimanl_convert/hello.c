// Binary to decimal number convert;

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

char binary_string_length(char binary[20]);

int main(){

	char binary[20];
	printf("Enter any binary number: ");
	fflush(stdout);
	gets(binary);

	int i,length,power,decimal = 0;
	length = binary_string_length(binary);
	power = length-1;

	for(i = 0; i < length; i++){
		decimal += (binary[i] - '0') * pow(2, power);
		power--;
	}

	printf("%s binary to decimal = %d\n",binary, decimal);

	return 0;
}

char binary_string_length(char binary[20]){
	int i,length = 0;
	for(i = 0; binary[i] != '\0'; i++){
		length++;
	}
	return length;
};