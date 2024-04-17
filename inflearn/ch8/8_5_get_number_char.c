/*
8.5. 숫자와 문자를 섞어서 입력받기
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
    char c;
    int rows, cols;

    printf("input one character and two integers:\n");

    //--[ TODO ] | 문자, row, col 입력 받고 출력--
    //scanf는 지가 받을 것만 받고 남은 건 버퍼에 저장한다
    //getchar는 버퍼 가장 앞의 데이터를 반환하고, 버퍼에 데이터가 없으면 \n가 입력될 때까지 데이터 반환 

    //getchar로 한 글자만 입력 받고(줄 바꿈 제외)
    while((c = getchar()) != '\n')
    {
        //남은 정수 2개 입력 받고
        scanf("%d %d", &rows, &cols);
        //%d는 공백문자(\n, \t, \r)를 자동 무시
        //%c는 모든 문자를 받아들임

        //scanf로 입력받은 후에, 버퍼에 남아있는 것을 지워준다
        //getchar()함수가 \n를 읽어들일 때까지 반복
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