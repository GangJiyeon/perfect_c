/*
9.17. 포인터 변수의 크기
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char a;
    float b;
    double c;

    char *ptr_a = &a;
    float *ptr_b = &b;
    double *ptr_c = &c;

    printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c));

    //주소체계 크기에 따라 다르다 
    printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c));
    printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c));
    printf("%zd %zd %zd\n", sizeof(char *), sizeof(float *), sizeof(double *));

    return 0;
}