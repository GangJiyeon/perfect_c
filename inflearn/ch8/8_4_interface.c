/*
8.4. ����� �������̽��� ģ���ϰ�
*/
#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

int main()
{
    int cnt = 0;

    while(1)
    {
        printf("current count is %d. continue? (y/n)\n", cnt);

        if(getchar() == 'n')
            break;

        while(getchar() != '\n')
            continue;

        cnt++;
    } 

    return 0;
}