/*
strlen(): 문자열의 길이를 잴 때 사용하는 함수
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen and more

int main()
{

    char str1[100] = "hello";
    char str2[] = "hello";
    char str3[100] = "\0";
    char str4[100] = "\n";

    printf("%zu %zu\n", sizeof(str1), strlen(str1));
    printf("%zu %zu\n", sizeof(str2), strlen(str2));
    printf("%zu %zu\n", sizeof(str3), strlen(str3));
    printf("%zu %zu\n", sizeof(str4), strlen(str4));

    // sizeof => 초기화 시 할당된 크기 or 할당X 시 문자열크기 + 1
    // strlen => 문자열 갯수, 개행문자 크기 1, \0은 0, 띄어쓰기 1

    /*동적할당*/
    char *str5 = (char*)malloc(sizeof(char) * 100);
    str5[0] = 'H'; 
    str5[1] = 'E';
    str5[2] = 'L';
    str5[3] = 'L';
    str5[4] = 'O';
    str5[5] = '\0';

    printf("%zu %zu\n", sizeof(str5), strlen(str5));
    //동적할당 시 포인터 변수의 크기만 알 수 있음(sizeof)

    return 0;

}