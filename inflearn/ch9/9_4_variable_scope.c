/*
9.4. ������ ������ ��������
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int int_max(int i, int j);

//���Ͽ������� => ������ü���� ���� ����
int a;

int main()
{
    int a;  //�� ���� �������� ���� ����� ������ �ٲ��
    a = int_max(1, 2);

    printf("%d\n", a);
    printf("%p\n", &a); //p=> ������, &=>�ּҰ��� �˷��ش�

    {
        //���� ���� a�� �ٸ� ������
        //�ش� ���� �ȿ����� ��ȿ�ϴ�
        int a = int_max(4, 5);  
        printf("%d\n", a);
        printf("%p\n", &a);

        int b  = 123;
    }

    printf("%d\n", a);  //���� a
    printf("%p\n", &a);

    return 0;
}


int int_max(int i, int j)
{
    //��������
    //������ ����� �� �ִ� ���� => ������ ����� ���� {}
    int m;  //stack frame
    m = (i > j) ? i : j;
   
    return m;
}