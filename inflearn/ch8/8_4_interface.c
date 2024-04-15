/*
8.4. 사용자 인터페이스는 친절하게
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