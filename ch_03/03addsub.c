/*
    perfect_c / ch_03 / 03addsub.c
    2024.01.19 jiyeon
*/
#include <stdio.h>
int main(void){

    int data1 = 20, data2 = 13;

    //대입연산자의 왼쪽과 오른쪽에서의 변수 의미 해석
    int diff = data1 - data2;
    int sum = data1 + data2;

    printf("data1: %d, data2: %d\n", data1, data2);
    printf("합: %d, 차: %d", sum, diff);

    return 0;
}