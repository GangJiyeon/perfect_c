/*
6.5. 사실과 거짓
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    int tv, fv;
    tv = (1 < 2);
    fv = (1 > 2);

    printf("true is %d\n", tv);
    printf("true is %d\n", fv);

    // 0이면 false고 나머지는 다 true이다
    return 0;
}