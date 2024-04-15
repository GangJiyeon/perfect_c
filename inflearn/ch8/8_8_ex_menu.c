/*
8.8. 메뉴 만들기 예제
*/
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int input_message(void);
void print_increase_num();

int main()
{
    int ch;

    while((ch = input_message()) != 'q')
    {
        switch(ch)
        {
        case 'a':
            printf("Avengers assemble!\n");
            break;
        case 'b':
            printf("\a");
            break;
        case 'c':
            print_increase_num();
            break;
        case 'q':
            break;
        }
    }

    return 0;
}

int input_message(void)
{
    int ch;

    while(1)
    {
        printf("\n[ Enter the letter of your choice ] \n");
        printf("a. avengers \t");
        printf("b. beep\n");
        printf("c. count\t");
        printf("q. quit\n");

        printf("enter the letter : _\b");

        fflush(stdin);
        ch = getchar();

        if((97 <= ch && ch <= 99) || (ch == 113))
            break;
        else
        {
            printf("please input a or b or c or d! \\-/ \n");  
        }
    }

    return ch;
    
}

void print_increase_num()
{
    printf("Enter an integer : _\b");

    int num;
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
}