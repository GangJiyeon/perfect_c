/*
8.7. 입력 스트림과 숫자
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    //getchar(): 빈칸까지 받아들임
    //scanf(): 빈간이 있으면 사용자가 한 가지 항목을 다 입력했다고 생각

    char str[255];
    int i, i2;
    double d;

    scanf("%s %d %lf", str, &i, &d);
    printf("%s %d %f\n", str, i, d);

    //or (see the difference)

    scanf("%s %d %d", str, &i, &i2);
    printf("%s %d %d\n", str, i, i2);

    //or (see the difference)
    
    char c;
    while((c = getchar()) != '\n')
        putchar(c);

    printf("\n");

    return 0;
}