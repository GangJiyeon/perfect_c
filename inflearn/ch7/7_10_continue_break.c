/*
7.10. ��������� contine�� break
*/
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{

    /*continue*/
    for(int i = 0; i < 10; ++i)
    {
        if(i == 5)
            continue;
        
        printf("%d ", i);
    }


    /*break*/
    for(int i = 0; i < 10; i++)
    {
        if(i == 5)
            break;

        printf("%d ", i);
    }

    /*while and contine*/
    int count = 0;
    while(count < 5)
    {
        int c = getchar();
        
        inf(c == 'a')
            continue;
        
        putchar(c);
        count++;
    }

    /*continue as a placeholder*/
    while(getchar() != '\n')
        continue;


    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++) //���� ����
        {
            if(j == 5)
                break;  //�ڱ⸦ ������ ���������� ����������.

            printf("(%d %d)", i j);
        }

        printf("\n");   //��� ������
    }

    return 0;
}