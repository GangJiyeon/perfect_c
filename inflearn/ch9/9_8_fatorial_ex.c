/*
9.8. 팩토리얼 예제
*/

#define _CRT_SECURE_NO_WARIN
#include <stdio.h>

/*
loop vs recursion
*/

long loop_factorial(int n);
long recursive_factorial(int n);

int main()
{
    int num = 5;

    printf("%d\n", loop_factorial(num));
    //printf("%d\n", recursive_factorial(num));

    return 0;
}

long recursive_factorial(int n)
{
    if(n >= 1)
        return n * recursive_factorial(n - 1);  //tail(end) recursion
    else
        return 1;
}

long loop_factorial(int n)
{
    long value = 1;

    for(int i = n; i >= 1; i--)
    {
        value *= i;
    }

    return value;
}