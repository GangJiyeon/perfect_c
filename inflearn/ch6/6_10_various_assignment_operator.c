/*
다양한 대입 연산자들, 어셈블리 코드 확인법
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    /*
        +=, -=, *=, /=, %=
    */

    int i = 1024;

    i = i + 10;
    i += 10;

    i %= 4;

    i = i * (1 + 2);
    i *= 1 + 2;
    i *= (1 + 2);   //chech precedence

    for(int i = 0; i < 10; i++)
        ;
    return 0;
}