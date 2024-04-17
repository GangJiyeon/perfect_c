/*
9.6. 재귀호출 = 재귀함수
무한루프에서 사용하면 안 됨
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_func(int);

int main()
{
    my_func(1);

    return 0;
}

void my_func(int n)
{
    printf("level %d, address of variable n = %p\n", n, &n);

    //stop condition을 만나기 전까지는 함수가 호출되기만 한다
    if(n < 10)
        my_func(n + 1);

    printf("level %d, address of variable n = %p\n", n, &n);
}