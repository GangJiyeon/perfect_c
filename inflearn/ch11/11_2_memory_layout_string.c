/*
11.2. memory layout and strings

-리눅스/gcc 기준
[주소가 높은 방향]

>command-line arguments and environment variables

>stack: 지역변수가 담김, 메모리 크기를 알 때, 크기 변함
>free: 자유공간, heap이나 stack이 크기가 변하면서 사용하게 된다
>heap: 메모리 크기를 모를 때, 크기 변함

>BSS(block started by symbol) segment: 
    초기화되지 않은 전역/정적 변수들, 크기 고정
>DATA segment : 초기화된 전역/정적변수, 크기고정

>TEXT segment: 프로그램 코드, 크기고정
 -read write DATA segment : 읽기/쓰기
 -read only DATA segment : 읽기전용
[주소가 낮은 방향]
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc

void test_function()
{
    int j;
    printf("stack high \t%llu\n", (unsigned long long)&j);
}

int main()
{
    //array versus pointer
    const char *pt2 = "I am a string!.";    //text segment에 문장이 있어서 변경이 불가능하다
    const char *pt3 = "I am a string!.";
    const char *pt4 = "I am a string!!!!!!!.";
    const char ar1[] = "I am a string!.";
    const char ar2[] = "I am a string!.";
    const char ar3[] = "I am a string!!.";

    printf("rodata low \t%llu %llu %llu %llu\n",
            (unsigned long long)pt2, (unsigned long long)pt3, (unsigned long long)pt4,
            (unsigned long long)"I am a string!.");
        
    printf("stack high \t%llu %llu %llu\n", (unsigned long long)ar1,
            (unsigned long long)ar2, (unsigned long long)ar3);

    //memory address check
    //local variables
    printf("stack high \t%llu %llu %llu\n",
        (unsigned long long)&pt2, (unsigned long long)&pt3, (unsigned long long)&pt4);

    int i;
    printf("stack high \t%llu\n", (unsigned long long) & i);

    //local variable in a function
    test_function();

    //dynamic allocation
    char *p5 = (char*)malloc(sizeof(char)*100);
    printf("heap middle \t%llu\n", (unsigned long long)p5);

    char *p6 = (char*)malloc(sizeof(char)*100);
    printf("heap middle \t%llu\n", (unsigned long long)p6);

    //array versus pointer (continued)
    //ar1++; error => 배열자체는 주소값을 저장하고, 주소값 변경이 불가능
    puts(++pt2);

    return 0;

}