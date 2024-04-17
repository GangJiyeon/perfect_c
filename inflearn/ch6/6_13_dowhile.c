/*
6.13. do while, exit condition loop
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int const secret_code = 612111;
    int user_num = 0;

    /* mine
    while(user_num != secret_code)
    {
        printf("Enter secret code: ______\b\b\b\b\b\b");
        scanf("%d", &user_num);
    }

    printf("Good!");

    */

    /* use do while */
    do  //일단 해라
    {
        printf("Enter secret code: ______\b\b\b\b\b\b");
        scanf("%d", &user_num);
    }
    while(user_num != secret_code); //while동안

    printf("Good!");

    return 0;
}