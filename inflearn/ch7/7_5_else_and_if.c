/*
7.5. else�� if�� ¦����
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
    int number;
    printf("���ڸ� �Է����ּ���");
    scanf("%d", &number);

    if (number == 1)
        printf("one");
    else 
        if (number == 2)
            printf("two");
        else 
            if (number == 3)
                printf("three");
    

    return 0;
}