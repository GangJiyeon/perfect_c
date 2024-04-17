/*
8.1. 입출력 버퍼
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> //windows, _getch(), _getche()

int main()
{

    char c;
     
    /*
    
    */ 
   
    //버퍼를 사용하지 않음
    while((c = _getche()) != '.')   //echo O
    {
        putchar(c);
    } 

    while((c = _getch()) != '.')   //echo X
    {
        putchar(c);
    }

    return 0;
}