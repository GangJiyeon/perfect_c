/*
6.1. while 반복 루프에서 scanf()의 반환값 사용하기
*/
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
    int num = 0;
    int sum = 0;
    
    /*
    int status; //scanf의 반환값을 저장할 함수
    */

    printf("Enter an integer (q to quit) : ");

    /*
    status = scanf("%d", &num); //정수만 입력 받으므로 q를 입력하면 아무것도 받지 않아 status = 0;
    */

    while (scanf("%d", &num) == 1)
    {
        sum += num;
        printf("Enter next integer (q to quit) : ");
       
    }
    
    printf("sum : %d\n", sum);

    return 0;
}