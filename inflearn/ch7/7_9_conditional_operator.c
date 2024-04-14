/*
7.9. 조건연산자 ? :
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int temp;
    temp = 1 ? 1024 : 7;     //ternary operator
    printf("%d\n", temp);       //1024

    temp = 0 ? 1024 : 7;
    printf("%d\n", temp);       //7


    int number;
    scanf("%d", &number);


    const bool is_even = (number % 2 == 0) ? true : false; 

    if(is_even)
        printf("even");
    else
        printf("odd");


    //const bool = (number % 2 == 0) ? printf("even") : printf("odd");


    int a = 1, b = 2;
    int max = (a > 2) ? a : b;


    return 0;
}