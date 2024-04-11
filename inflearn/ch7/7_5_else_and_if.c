/*
7.5. else와 if의 짝짓기
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
    int number;
    printf("숫자를 입력해주세요");
    scanf("%d", &number);

    if (number == 1)
        printf("one");
    else 
        if (number == 2)
            printf("two");
        else 
            if (number == 3)
                printf("three");
    

    return 0;
}