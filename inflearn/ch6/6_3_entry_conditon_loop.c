/*
6.3. 진입조건 루프 while (Entry-Condition Loop)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /*
    while (expression)  => expression이 0이면 false, 실행 중지
        statement
    */

    int i;

    /*
    i = 1;
    while(i < 5)     //infinite loop
        printf("hi\n"); //iteration

    */

    /*
    i = 1;
    while(--i < 5)     //wrong direction
        printf("hi\n"); 

    */
        
    /*
    i = 1;
    while(i < 5)     
    {
        printf("i before = %d", i);
        i++;
        printf("i after = %d\n", i);
    }
    */

    /*
    i = 10;
    while(i++ < 5)     //cannot enter
    {
        printf("hi"\n);
    }
    */

    /*
    i = 0;
    while(i < 5)     //{}
        printf("%i\n", i);
        i++;    //indenting
    */

}