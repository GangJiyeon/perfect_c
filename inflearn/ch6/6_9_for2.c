/*
6.9. for는 유연해요
*/

#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

int main()
{

    /*
    for's structure

        for(initialize; test; update)
            statement
    */

    for(int i = 10; i > 0; i--)
    {
        printf("%d", i);
    }

    printf("\n");

    for(int i = 0; i < 100; i += 8;)
        printf("%d", i);

    printf("\n");

    for(char c = 'A'; c < 'Z'; c++)
        printf("%c", c);

    printf("\n");

    for(int i = 0; i * i < 10; i++)
        printf("%d", i);

    printf("\n");

    for(int x = 1, y = 5; y <= 20; y = (++x *3) + 10)
        printf("%d", x);

    for(double d = 100.0; d < 300; d = d * 1.1)
        printf("%f\n", d);


    int i, n;
    n = 2;
    for(i = 2; n < 10; /*left blank*/)
    {
        n *= i;
        printf("%d\n", n);

    }

    /*  while(1)과 동일하다
    for(;;)
        printf("I love u");
    */

    //조금 과하다, 권장X
    i = 0;
    for(printf("hihi!!"); i != 7; scanf("%d", &i))
        ;//null statement
    return 0;
}