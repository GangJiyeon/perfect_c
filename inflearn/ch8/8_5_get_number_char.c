/*
8.5. ���ڿ� ���ڸ� ��� �Է¹ޱ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
    char c;
    int rows, cols;

    printf("input one character and two integers:\n");

    //--[ TODO ] | ����, row, col �Է� �ް� ���--
    //scanf�� ���� ���� �͸� �ް� ���� �� ���ۿ� �����Ѵ�
    //getchar�� ���� ���� ���� �����͸� ��ȯ�ϰ�, ���ۿ� �����Ͱ� ������ \n�� �Էµ� ������ ������ ��ȯ 

    //getchar�� �� ���ڸ� �Է� �ް�(�� �ٲ� ����)
    while((c = getchar()) != '\n')
    {
        //���� ���� 2�� �Է� �ް�
        scanf("%d %d", &rows, &cols);
        //%d�� ���鹮��(\n, \t, \r)�� �ڵ� ����
        //%c�� ��� ���ڸ� �޾Ƶ���

        //scanf�� �Է¹��� �Ŀ�, ���ۿ� �����ִ� ���� �����ش�
        //getchar()�Լ��� \n�� �о���� ������ �ݺ�
        while(getchar() != '\n') 
            continue;

        display(c, rows, cols);

        printf("input another character and two integers:\n");
        printf("(press enter to quit.)\n");
    }

    return 0;
}



void display(char cr, int lines, int width)
{
    
    for(int i = 1; i <= lines; i++)
    {
        for(int j = 1; j <= width; j++)
        {
            //putchar(cr);
            printf("%c", cr);
        }

        //putchar('\n');
        printf("\n");
    }   
}