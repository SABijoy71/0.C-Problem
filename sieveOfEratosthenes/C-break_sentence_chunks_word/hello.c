// Break a sentence into some chunks of word //
#include <stdio.h>
#include <math.h>
#include <string.h>

int sentence_length(char sentence[1000]);

int main(){

	char sentence[1000],word[100];
	int i,j,length,is_started = 0;

	printf("Enter any sentence: ");
	fflush(stdout);
	gets(sentence);

	length = sentence_length(sentence);

	for(i = 0,j = 0; i <= length; i++){
		if((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= '0' && sentence[i] <= '9')){
			if(is_started = 0){
				is_started = 1;
			}
			word[j] = sentence[i];
			j++;
		}else{
			if(is_started = 1){
				is_started = 0;
				word[j] = '\0';
				printf("%s\n", word);
				j = 0;
			}
		}
	}

	return 0;
}

int sentence_length(char sentence[1000]){
	int i;
	for(i = 0; sentence[i] != '\0'; i++);
	return i;
}
