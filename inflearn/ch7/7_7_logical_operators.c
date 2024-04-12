/*
7.7 ?끉由? ?뿰?궛?옄 logical operators
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <iso646.h>     //and, or, not

#define PERIOD '.'


int main()
{
    /*
    logical operators
    &&: and
    ||: or
    !: not
    */

    bool test1 = 3 > 2 || 5 > 6;
    bool test2 = 3 > 2 && 5 > 6;
    bool test3 = !(5 > 6);

    //true false true
    printf("%d %d %d\n", test1, test2, test3);


    char ch;
    int count = 0;

    while((ch = getchar()) != PERIOD)
    {
        if(ch != '\n')
            count++;
    }

    printf("입력한 글자의 갯수는 => %d", count);


    /*
        short-circuit evaluation

        -logical expression are evaluated from left to right
        -&& and || are sequence points
    */

    int temp = (1 + 2) * (3 + 4);    //()왼오 순서는 딱히...
    //temp == 24;

    //왼쪽이 false라 오른쪽 실행이 안됨    
    if(temp == 0 && (++temp == 1023))
    {

    };
    //temp == 24;


    int x = 1, y = 2;
    inf(x++ > 0 && x + y == 4)
        printf("%d %d", x, y);
    

    //3 <= i <= 10 => 문맥 오류가 생긴다    

}