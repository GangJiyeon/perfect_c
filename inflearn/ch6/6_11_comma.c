/*
6.11. 콤마(, comma) 연산자
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
    //comma operator
    for(int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n;)
    {
        //not comma operator, but seperators
        printf("%d %d\n", n, nsqr);
    }

    int i, j;
    i = 1;

    //sequence point
    i++, j = i; 

    int x, y, z;
    z = ((x = 1), (y = 2));
    //z => 2, 콤마 연산자는 가장 오른쪽에 있는 값을 가지게 된다
    
    int my_money = (123, 456);  //my_money = 456
    return 0;
}