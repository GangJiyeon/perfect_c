/*
6.7. 관계연산자의 우선순위
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    int x = 1, y = 2, z;

    x > y + 2;
    x > (y + 2);

    x = y > 2;
    x = (y > 2);

    z = x > y;
    z = (x > y);

    x != y == z;    //우선순위가 같음 => left to right
    (x != y) == z;

    return 0;
}