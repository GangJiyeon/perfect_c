/*
8.5. 숫자와 문자를 섞어서 입력받기
*/
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
    char c;
    int rows, cols;

    printf("input one character and two integers:\n");

    while((c = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols);
        while(getchar() != '\n') continue;
        display(c, rows, cols);

        printf("input another character and two integers:\n");
        printf("press enter to quit.\n");
    }

    return 0;
}



void display(char cr, int lines, int width)
{
    int i, j;
    for(i = 1; i <= lines; i++)
    {
        for(j = 1; i <= width; j++)
        {
            putchar(cr);
            //printf("%c", cr);
        }

        putchar('\n');
        //printf("\n");
    }   
}