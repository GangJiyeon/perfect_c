/*
9.3. �Լ��� �ڷ����� ��ȯ��
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

//��ȯ�ڷ��� => �Լ��� �ڷ���ó�� ������ �� �ִ�
//������ ��ȯ�ڷ����� ������ �ȴ�. �ٵ� vscode���� �ȵǴ� ��
int int_min(int, int);

int main()
{
    int i1, i2;

    while(1)
    {
        printf("input two integers : ");

        if(scanf("%d %d", &i1, &i2) != 2)
            break;

        int lesser = int_min(i1, i2);

        //int lesser = min;

        printf("the lesser of %d and %d is %d \n", i1, i2, lesser);

        //printf("the lesser of %d and %d and is %d \n", i1, i2, int_mit(i1, i2));

    }
    
    printf("end.\n");
}

int int_min(int i, int j)
{
    //local vaiables
    int min;

    if(i < j)
        min = i;
    else
        min = j;

    //return (i > j) ? i : j;
    return min;
}