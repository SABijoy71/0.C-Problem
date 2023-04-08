#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *fp;
	fp = fopen("img.jpg", "rb"); // Anytype of file can be useable //
	if(fp == NULL){
		perror("Can't open file!");
		return EXIT_FAILURE;
	}

	fseek(fp, 0,SEEK_END);
	printf("File size in %ld Bytes.\n", ftell(fp));
	printf("File size in %ld KiloBytes.\n", ftell(fp)/1024);

	fclose(fp);

	return 0;
}