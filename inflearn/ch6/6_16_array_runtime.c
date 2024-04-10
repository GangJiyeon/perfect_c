/*
6.16. 배열과 런타임 에러(array and runtime errer)
*/

#define _CRT_SECURE_NO_WARING
#include <stdio.h>

#define NUM_DAYS 365

int main()
{
    //글자갯수 + null 만큼 메모리 할당
    //=> char 타입 사이즈의 메모리 크기 * 14
    char my_chars[] = "Hello, World!";  

    int daily_temperature[NUM_DAYS];
    double stock_prices_history[NUM_DAYS];

    printf("%zd\n", sizeof(stock_prices_history));      //365 * 8 = 2920 
    printf("%zd\n", sizeof(double) * NUM_DAYS);         //365 * 8 = 2920
    printf("%zd\n", sizeof(stock_prices_history[0]));   //8


    int my_numbers[5];

    my_numbers[0] = 1;      //subscripts, indices(index), offsets(첫 번재 주소로 부터 얼마나 떨어져 있는가)
    my_numbers[1] = 3;
    my_numbers[2] = 4;
    my_numbers[3] = 2;
    my_numbers[4] = 1024;

    scanf("%d", &my_numbers[0]);
    scanf("%d", my_numbers);        // => 주소라서 & 안 적어도 됨

    /* runtime error */
    //my_numbers[5] = 123;  => out of bount
    //my_numbers = 7        => compile error

    return 0;
}
