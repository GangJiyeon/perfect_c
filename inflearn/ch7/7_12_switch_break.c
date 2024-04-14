/*
7.12. 다중선택 switch and break
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{

    char c;
    while((c = getchar()) != '.')
    {
        printf("u love ");

        switch(c)   //정수형만 가능
        {
        case 'a':
        case 'A':
            printf("apple");
            break;
        case 'b':
            printf("baseball");
            break;
        case 'm':
            printf("me");
            break;
        default:
            printf("dog");
        }

        printf(".\n");

        while(getchar() != '\n')
            continue; 
    }
    return 0;
}