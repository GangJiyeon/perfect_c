/*
9.13. �������� �⺻���� �����
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

    b = a_ptr;  //������ ������ ����XXXXXX!!!!
    return 0;
}