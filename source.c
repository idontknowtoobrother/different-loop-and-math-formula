#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int sizeNumber = 1600000000;
    int* arr = malloc(sizeof(int)*sizeNumber);
    int i;
    int sum;

    clock_t begin, end;
    double time_spent = 0.0;


    // generate number
    for(i = 0; i < sizeNumber; i++){
        arr[i] = i+1;
    }


    // loop style
    begin = clock();
    for(i = 0; i < sizeNumber; i++){
        sum+=arr[i];
    }
    end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("result: %d / time: %f", sum, time_spent);

    // math big brain style


}