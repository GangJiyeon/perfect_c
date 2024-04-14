/*
7.13. goto를 피하는 방법
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
    /*if else*/
    int size = 15, cost;

    if(size < 10)
        goto b;

    goto b;

a: cost = 50 * size;
b: cost = 100 * size;

    char c;

read: c = getchar();
    putchar(c);
    if(c == '.') goto quit;
    goto read;
quit;


    return 0;
}