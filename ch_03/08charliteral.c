#include <stdio.h>

int main(void)
{

    printf("%Cava", 'J');

    char sq = '\'';                 //작은 따옴표

    printf("%c\7\n", 'a');          //알람 문자 2번 + 엔터
    printf("%c자바언어'\n", sq);    //문자열 내부에서 '그대로 사용 가능

    printf("\"난 부자가 되고 싶다\"");  //큰 따옴표는 문자열 내부에서 \"로


    return 0;
}