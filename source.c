#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int sizeNumber = 99999999;

    int *arr = malloc(sizeof(int)* sizeNumber);
    double sum = 0.0, math_style_sum = 0.0;

    clock_t begin, end, begin_math, end_math;
    double time_spent = 0.0, math_time_spent = 0.0;

    // generate number
    for(int i = 0; i < sizeNumber; i++){
        arr[i] = i+1;
    }


    // loop style
    begin = clock();
    for(int i = 0; i < sizeNumber; i++){
        sum+= arr[i];
    }
    end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("result: %.2f / time: %f", sum, time_spent);

    // math big brain style
    begin_math = clock();
    double firstNum = arr[0];
    double lastNum = arr[sizeNumber-1];
    double calcT = lastNum-firstNum+1;
    math_style_sum = (firstNum+lastNum)*calcT/2;
    end_math = clock();
    math_time_spent += (double)(begin_math - end_math) / CLOCKS_PER_SEC;
    printf("\nresult: %.2f / time: %f", math_style_sum, math_time_spent);

}