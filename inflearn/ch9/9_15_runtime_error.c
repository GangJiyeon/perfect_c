/*
9. 15. NULL �����Ϳ� ��Ÿ�ӿ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /*
    int a = 1234;
    printf("%p\n", &a);
    printf("%d\n", a);

    int *ptr = 1234;    //runtime error �߻�
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    */

    int* safer_ptr = NULL; //null
    int a = 123;
    //safer_ptr = &a;

    int b;
    scanf("%d", &b);

    if(b % 2 == 0)
        safer_ptr = &a;

    if(safer_ptr != NULL)
        printf("%p\n", safer_ptr);

    return 0;
}