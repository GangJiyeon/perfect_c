/*
7.8. 단어 세기 예제
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define PERIOD '.'

int main()
{

    printf("Enter text : ");
    
    char ch;
    
    int char_num = 0;
    int word_num = 1;
    int line_num = 1;
    bool word_flag = false; //new word
    bool line_flag = false; //new line

    while((ch = getchar()) != PERIOD)
    {
        if(!isspace(ch))
            ++char_num;

        //글자가 입력되었는데, 새로운 줄(flag = false)이라면
        if(!isspace(ch) && !line_flag)
        {
            //줄 수 추가, line_flag = false;
            line_num++;
            line_flag = true;
        }

        //줄바꿈이 일어나면 flag = false
        if(ch == '\n')
        {
            line_flag = false;
        }    

        if(!isspace(ch) && !word_flag)
        {
            ++word_num;
            word_flag = true;
        }

        if(isspace(ch))
            word_flag = false;
            
    }

    printf("Characters = %d, Words = %d, Lines = %d", char_num, word_num, line_num);
    return 0;
}