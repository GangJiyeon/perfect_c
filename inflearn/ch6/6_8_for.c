/*
6.8. for 루프 소개
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    //indefinite loop vs. counting loop
    /*
    while(1)
    {
        do somethig
    }
    */
    
    /*
    //counting loop
    1. counter initialization
    2. couter check
    3. couter change
    */

    

    for(int i = 1; i <= 10; i++)
        printf("%d", i);

    return 0;
}