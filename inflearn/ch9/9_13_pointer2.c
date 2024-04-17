/*
9.13. 포인터의 기본적인 사용방법
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 123, b;
    int *a_ptr;
    a_ptr =  &a;

    printf("%d %d %p", a, *a_ptr, a_ptr);

    *a_ptr = 456;
    printf("%d %d %p", a, *a_ptr, a_ptr);

    b = a_ptr;  //가능은 하지만 권장XXXXXX!!!!
    return 0;
}