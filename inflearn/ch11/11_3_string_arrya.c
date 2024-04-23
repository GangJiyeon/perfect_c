/*
11.3. 문자열의 배열
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //arrays of character strings
    //포인팅만 되고 있어서 텍스트 세그먼트에 저장
    const char *mythings[5] = {
        "dancing in the rain",
        "counting apples",
        "watching movies with friends",
        "writing sad letters",
        "studying the C language"
    };

    //스택에 배열로서 메모리를 가지고 있음
    char yourtings[5][40] = {
        "studing the c++ language",
        "eating",
        "watching netfilx",
        "walking around till dart",
        "deleting spam emails"
    };

    //포인터로 문자열을 저장하면 
    //1. 컴파일러가 알아서 한 곳에 두고 사용해 메모리를 아낄 수 있다
    //2. read-only로, 운영체가 수정을 막아 값 수정이 불가능하다
    const char *temp1 = "dancing in the rain";      
    const char *temp2 = "studing the c++ language";

    printf("%s %u %u\n", mythings[0], (unsigned)mythings[0], (unsigned)temp1);
    printf("%s %u %u\n", yourtings[0], (unsigned)yourtings[0], (unsigned)temp2);

    printf("%-30s %-30s\n", "my things:", "your things");
    for(int i = 0; i < 5; i++)
        printf("%-30s %-30s\n", mythings[i], yourtings[i]);


    printf("\nsizeof mythings: %zd, sizeof your yourthings: %zd\n",
            sizeof(mythings), sizeof(yourtings));

    //to print out what's in the memory
    //not a good idea to take advantage of this property
    for(int i = 0; i < 100; i++)
        printf("%c", mythings[0][1]);
    printf("\n");

    for(int i = 0; i < 200; i++)
        printf("%c", yourtings[0][1]);
    printf("\n");

    return 0;
} 