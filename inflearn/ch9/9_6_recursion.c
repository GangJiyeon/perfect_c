/*
9.6. ���ȣ�� = ����Լ�
���ѷ������� ����ϸ� �� ��
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

    //stop condition�� ������ �������� �Լ��� ȣ��Ǳ⸸ �Ѵ�
    if(n < 10)
        my_func(n + 1);

    printf("level %d, address of variable n = %p\n", n, &n);
}