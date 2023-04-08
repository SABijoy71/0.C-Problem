#include <stdio.h>
#include <math.h>

int size;
char array[60];

void sieve(){
    int i;
    for(i = 2; i <= size; i++){
        array[i] = 1;
    }
    int root = sqrt(size);
    int j;
    for(i = 2; i <= root ; i++){
        if(array[i] == 1){
            for(j = 2; j*i <= size; j++){
                int index = j*i;
                array[index] = 0;
            }
        }
    }
}

int isPrime(int input){
    if(input < 2){
        return 0;
    }
    return array[input];
}

int main(void){

    printf("Enter size (1-60): ");
    // fflush(stdout);
    scanf("%d", &size);

    sieve();

    while(1){
        int input;
        printf("Enter a number (enter 0 to exit): ");
        // fflush(stdout);
        scanf("%d", &input);

        if(input == 0){
            break;
        }
        if(1 == isPrime(input)){
            printf("%d prime.\n", input);
        }else{
            printf("%d not prime.\n", input);
        }

    }

    return 0;
}