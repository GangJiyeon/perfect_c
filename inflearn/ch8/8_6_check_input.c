/*
8.6. �Է� Ȯ���ϱ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long get_long(void);

int main()
{
    printf("please input a integer between 1 and 100.\n");

    long number;

    while(1)
    {        
        number = get_long();
        if(1 < number && number < 100)
        {
            printf("thank you!!");
            break;
        }    
    }
    
    

    return 0;
}

long get_long()
{

    //printf("please input an integer and press enter.\n");

    long input;
    char c;

    //scanf()'s return value : �Է¹��� ������ ��
    while(scanf("%ld", &input) != 1)
    {
        printf("your input - ");
        
        //scanf�� ����� �Է��� ���� ���ߴٸ� ������� �Է��� ���ۿ� ���´�
        //���۸� ���鼭?(�̵��ϸ鼭) ������� �Է��� �����ش�
        while((c = getchar()) != '\n')
            putchar(c);     //input left in buffer

        printf(" - is not an integer. please try again.\n");
    }

    printf("your input %ld is an integer. thank you.\n", input);

    return input;
}