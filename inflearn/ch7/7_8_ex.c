/*
7.8. 단어 세기 예제
*/
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#define PERIOD '.'

int main()
{

    printf("Enter text : ");
    
    char ch;
    
    int char_num = 0;
    int word_num = 1;
    int line_num = 1;

    while((ch = getchar()) != PERIOD)
    {
        ++char_num;

        if(ch == '\n')
            ++line_num;

        if(ch == ' ')
            ++word_num;
    }

    printf("Characters = %d, Words = %d, Lines = %d", char_num, word_num, line_num);
    return 0;
}