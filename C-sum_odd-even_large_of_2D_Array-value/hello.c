// Sum of multiplication table all value and find how many value has odd and even in this array using 2D Array;

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int multiplication_table[10][10];

    int col,row;

    for(row = 0; row < 10; row++){
        for(col  = 0; col < 10; col++){
            multiplication_table[row][col] = (row+1)*(col+1);
            printf("%d x %d = %d\n", row+1, col+1, multiplication_table[row][col]);
        }
        printf("\n");
    }
    
    int odd = 0,even = 0,sum = 0;

    for(row = 0; row < 10; row++){
        for(col = 0; col < 10; col++){
            sum += multiplication_table[row][col];
            if(multiplication_table[row][col]%2 == 0){
                even++;
            }else{
                odd++;
            }
        }
    }

    int large = multiplication_table[0][0];

    for(row = 0; row < 10; row++){
        for(col = 0; col < 10; col++){
            if(multiplication_table[row][col] > large){
                large = multiplication_table[row][col];
            }
        }
    }

    printf("Even value = %d\n", even);
    printf("Odd value = %d\n", odd);
    printf("Sum value = %d\n", sum);
    printf("Large value = %d\n", large);

    return 0;
}