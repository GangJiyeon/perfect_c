/*
11.1. 문자열을 정의하는 방법
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MESSAGE "A symbolic string contant"
#define MAXLENGTH 81

int main()
{
    char words[MAXLENGTH] = "A string in an array";
    const char* pt1 = "A pointer to a string.";

    puts("puts() adds a newline at the end: ");
    puts(MESSAGE);
    puts(words);    //warning => 남은 공간 다 안 써서
    puts(pt1);

    words[3] = 'p';
    puts(words);
    
    //error
    //pt1[8] = 'A' => const가 없어도 error 발생

    char greeting[50] = "Hello, and"" How are" " you";
    puts(greeting);

    printf("\"To be, or not to be\" Hamlet said.\n");
    
    //*"문자열" => 첫번째 공간인 주소에 대해 인디렉션 => 첫글자
    printf("%s, %p, %c\n", "we", "are", *"excellent programmers");


    //나머지 칸은 알아서 초기화해준다
    const char m1[15] = "love you";

    for(int i = 0; i < 15; ++i)
        printf("%d ", (int)m1[i]);
    printf("\n");


    const char m2[15] = {'l', 'o', 'v', 'e', ' ', 'y', 'o', 'u', '\0'};
    
    for(int i = 0; i < 15; ++i)
        printf("%d ", (int)m2[i]);
    printf("\n");

    const char m3[] = "love you";

    int n = 8;
    char cookies[1] = {'A', };
    char cakes[2 + 5] = {'A', };
    char pies[2 * sizeof(long double) + 1] = {'A', };

    //VLA : char crumbs[n];

    char truth[10] = "Truths is";
    if(truth == &truth[0]) puts("t");
    if(*truth == 'T') puts("t");
    if(*(truth + 1) == truth[1]) puts("t");
    if(truth[1] == 'r') puts("t");

    return 0;
}