/*
7.2. 표준 입출력 함수들 => getchar(), putchar()
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /*
        1. introduce getchar(), putchar()
        2. use while loop to process character sequences
        3. filter a spcific character
        4. convert numbers to asterisks
        5. lower characters to upper characters
    */

    char ch;

    //buffer에 저장
    //ch = getchar(); // 문자 -> int(아스키코드) -> 문자
    //putchar(ch);    // 문자 -> int(아스키코드) -> 문자

    while((ch = getchar()) != '\n')   //use '\n' to find the end of a senetece
    {
        if(ch == 'f' || ch == 'F')
        {
            ch = 'x';
        }
        else if(ch >= '0' && ch <= '9')
        {
            ch = '*';
        }    

        if('A' <= ch && ch <= 'Z')
        {
            ch += 32; //('a' - 'A');
        }
        else if('a' <= ch && ch <= 'z'){
            ch -= ('a' - 'A');
        }
        
        putchar(ch);
        //ch = getchar(); //저장된 걸 가져옴(while을 돌면서 가져오는 것X)
    };

    putchar(ch);

    return 0;
}