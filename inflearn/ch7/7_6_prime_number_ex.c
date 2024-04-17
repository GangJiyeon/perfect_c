/*
7.6. 소수판단예제
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    unsigned num;

    //소수 = 거짓
    int isPrime = 0;    //flag, try bool type

    scanf("%u", &num);
    printf("%u", num);

    for(unsigned i = 2; i < num; i++)
    {
        if(num % i == 0)
            break;
        else
            isPrime = 1;
    }

    if(isPrime)
    {
        printf("%u is a prime number.\n", num);
    }
    else
    {
         printf("%u is not a prime number.\n", num);
    }

    return 0;
}