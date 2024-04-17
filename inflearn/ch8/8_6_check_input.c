/*
8.6. 입력 확인하기
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

    //scanf()'s return value : 입력받은 데이터 수
    while(scanf("%ld", &input) != 1)
    {
        printf("your input - ");
        
        //scanf가 제대로 입력을 받지 못했다면 사용자의 입력이 버퍼에 남는다
        //버퍼를 비우면서?(이동하면서) 사용자의 입력을 보여준다
        while((c = getchar()) != '\n')
            putchar(c);     //input left in buffer

        printf(" - is not an integer. please try again.\n");
    }

    printf("your input %ld is an integer. thank you.\n", input);

    return input;
}