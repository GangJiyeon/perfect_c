/*
문자의 배열=> 마지막이 어디인지를 표현하기 위해 \0으로 표현(null)
*/

#include <stdio.h>

int main()
{

    int a = 1;
    int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);


    char c = 'a';

    char str1[10] = "hello";    //null character, 9글자까지만 저장 가능
    char str2[10] = {'H', 'i'};

    printf("%c\n", c);
    printf("%s\n", str1);   // \0을 만나면 그 뒤는 출력하지 않는다
    printf("%s\n", str2);

    printf("%hhi %hhi %hhi %hhi \n", str2[0], str2[1], str2[2], str2[3], str2[4]);  //각각 출력하면 0이 출력된다
    return 0;
}