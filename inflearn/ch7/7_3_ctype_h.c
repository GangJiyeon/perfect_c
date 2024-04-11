/*
7.3. ctype.h 문자 함수들

reference link
https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    while((ch = getchar()) != '\n')   //use '\n' to find the end of a senetece
    {
        if(ch == 'f' || ch == 'F')
        {
            ch = 'x';
        }
        else if(isdigit(ch))
        {
            ch = '*';
        }    

        if(isupper(ch))
        {
            ch = tolower(ch);
        }
        else if(islower(ch)){
            ch = toupper(ch);
        }
        
        putchar(ch);
    };

    putchar(ch);

    return 0;
}