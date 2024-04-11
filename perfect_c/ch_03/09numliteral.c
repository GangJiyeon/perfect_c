#include <stdio.h>

int main(void)
{

    printf("%d, %d\n", 010, 015);       //8진수
    printf("%d, %d\n", 10, 15);       //10진수
    printf("%d, %d\n", 0X1a, 0x15);    //16진수

    printf("%f, ", 2.77777);
    printf("%f, ", 2.7777E+2);
    printf("%f, ", 2.7777E-2);

    return 0;
}