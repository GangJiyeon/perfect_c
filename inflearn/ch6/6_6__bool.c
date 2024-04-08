/*
_Boll 자료형
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{

    int i;

    i = 5;
    i == 5;
    //5 is not l-value
    //5 = i;

    5 == i;

    while(i = 5){};
    while(i == 5){};

    _Bool boolean_true = (2 > 1);
    _Bool boolean_false = (1 > 2);

    printf(boolean_true ? "true" : "false");

    bool bt = true;
    bool bf = false;    //define으로 C언어가 해줌~~
    return 0;
}