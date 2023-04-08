#include <stdio.h>

#define MAX_LENGTH 100

int main(void){

	int input;
	int length = 0;
	int data[MAX_LENGTH];
	int value;
	int i;
	int index;

	do{

		printf("Menu\n");
		printf("--------\n");
		printf("1. Add\n");
		printf("2. Insert\n");
		printf("3. Edit\n");
		printf("4. Delete\n");
		printf("5. Display\n");
		printf("6. Clear\n");
		printf("0. Exit\n");

		printf("\nSelect a menu: ");
		fflush(stdout);
		scanf("%d", &input);

		printf("------ Result ------\n");

		switch(input){
			case 0:
			break;
			case 1:

				printf("Enter an integer number: ");
				fflush(stdout);
				scanf("%d", &value);

				data[length] = value;

				printf("%d Value added %d index.\n", value,length);
				length++;

			break;
			case 2:

				printf("Enter your number: ");
				fflush(stdout);
				scanf("%d", &value);

				printf("Enter Index: 0 - %d: ", length);
				fflush(stdout);
				scanf("%d", &index);

				for(i = length; i > index; i--){

					data[i] = data[i - 1];

				}
				data[index] = value;
				length++;

			break;
			case 3:
				printf("Enter index between 0 - %d: ", length-1);
				fflush(stdout);
				scanf("%d", &index);

				printf("Enter Number: ");
				fflush(stdout);
				scanf("%d", &value);

				data[index] = value;

			break;
			case 4:

				printf("Enter index number you wanna delete: ");
				fflush(stdout);
				scanf("%d", &index);

				for(i = index; i < length; i++){
					data[i] = data[i + 1];
				}
				data[length] = 0;
				length--;

			break;
			case 5:

				if(length == 0){
					printf("There is no data\n");
				}else{
					printf("Data: ");
					for(i = 0; i < length; i++){
						printf("%d\t",data[i]);
					}
					printf("\n");
				}

			break;
			case 6:

				for(i = 0; i < length; i++){
					data[i] = 0;
				}
				length = 0;
				printf("Data Cleared\n");

			break;
			default:
			printf("Invalid Input\n");
			break;
		}

		printf("------ Result End ------\n");

	}while(input != 0);

	return 0;
}