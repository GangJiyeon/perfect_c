#include <stdio.h>

int main()
{

    int a = 0;

    a++;    //a =+ 1;
    printf("%d\n", a);  // 1

    ++a;    //a =+ 1;
    printf("%d\n", a);  // 2

    double b = 0;
    
    b++;
    printf("%f\n", b);  // 1.000000
    
    ++b;
    printf("%f\n", b);  // 2.000000

    /*
    ++a: 전위 증가 연산자 => 일단 증가 시킨다
    a++: 후위 증가 연산자 => 문장이 끝나면 증가 시킨다.
    */

    int i = 1, j = 1;
    int i_post, pre_j;

    i_post = i++;
    pre_j = ++j;

    printf("%d %d\n", i, j);    //2, 2
    printf("%d %d\n", i_post, pre_j);    //1, 2

    
    /* very high precedence */
    int x, y, z;
    x = 3, y =4;
    z = (x + y++) * 5;

    printf("%d %d %d\n", x, y, z);  //3, 5, 35


    /* ++ and -- affect modifiable lvaues */
    x = 1, y = 1;
    z = x * y++;
    //z = (x * y)++; => error
    //z = 3++;  =>error


    /* bad practices */
    int n = 1;
    printf("%d %d \n", n, n, * n++);
    return 0;
}