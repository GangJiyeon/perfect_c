/*
9.18. �������� �Ű�����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int, int);
void swap2(int*, int*);

int main()
{
    //main ���� a, b
    int a = 123, b = 456;
    int *a_ptr = &a;
    int *b_ptr = &b;

    swap(a, b);
    printf("main : %d %d\n", a, b);     //swap�� �ȵ� 

    swap2(a_ptr, &b);
    printf("main : %d %d\n", a, b);     //swao�� ��

    return 0;
}

void swap(int a, int b)
{
    //swap ���� a, b�� main���� a, b�� �ٸ���
    //���� ���� ȣ��(call by value) : ������ ���� ����ǰ�, ���� ���� ���´�
    int temp = a;
    a = b;
    b = temp;

    printf("swap : %d %d\n", a, b);
}

void swap2(int* a_p, int* b_p)
{
    int temp = *a_p;
    *a_p = *b_p;
    *b_p = temp;
}