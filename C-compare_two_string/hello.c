// This portion is about compare two string large or small or equal //
#include <stdio.h>
#include <math.h>
#include <string.h>

int string_compare(char first_string[10],char second_string[10]);

int main(){

	char first_string[100];
	char second_string[100];

	printf("Enter first word: ");
	fflush(stdout);
	gets(first_string);
	printf("Enter second word: ");
	fflush(stdout);
	gets(second_string);

	int return_value = string_compare(first_string,second_string);

	if(return_value == 1){
		printf("First is greater\n");
	}else if(return_value == -1){
		printf("Second is greater\n");
	}else if(return_value == 0){
		printf("First & second is Equal\n");
	}

	return 0;
}

int string_compare(char first_string[10],char second_string[10]){

	int i;

	for(i = 0; first_string[i] != '\0' && second_string[i] != '\0'; i++){
		if(first_string[i] > second_string[i]){
			return 1;
		}
	}
	for(i = 0; first_string[i] != '\0' && second_string[i] != '\0'; i++){
		if(first_string[i] < second_string[i]){
			return -1;
		}
	}
	for(i = 0; first_string[i] != '\0' && second_string[i] != '\0'; i++){
		if(first_string[i] > second_string[i]){
			return 0;
		}
	}

}