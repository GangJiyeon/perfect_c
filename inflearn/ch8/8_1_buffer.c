/*
8.1. ����� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> //windows, _getch(), _getche()

int main()
{

    char c;
     
    /*
    
    */ 
   
    //���۸� ������� ����
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