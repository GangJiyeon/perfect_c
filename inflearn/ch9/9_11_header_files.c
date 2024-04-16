/*
9.10. 헤더 파일 만드는 방법
*/

#define _CRT_SECURE_NO_WARNING
//#include <stdio.h> => 기존 헤더 파일에 있어서 생략 가능
#include "test.h"
#include <stdio.h>

int main()
{
    print_hello();
    print_hi();
    print_str("hello!");

    return 0;
}