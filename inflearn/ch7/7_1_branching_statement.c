/*
7.1. if => 분기문

if(expression) => false(=0)이 아니라면
    statement
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    int number;

    printf("input a positive integer : _\b");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}