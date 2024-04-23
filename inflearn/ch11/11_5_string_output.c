/*
11.5. 문자열을 출력하는 다양한 방법들
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TEST "a string from #define"
int main()
{
    /* puts() : add \n at the end */
    
    char str[60] = "string array initialized";
    const char *ptr = "a pointer initailized";

    puts("stirng without \\n");
    puts("end");
    puts(TEST);
    puts(TEST + 5);
    puts(&str[3]);
    //puts(str[3]);
    puts(ptr + 3);

    //string without \0
    char str[] = {'H', 'I', '!'};   //no \0 at the end.
    puts(str);  //메모이레 우연히 존재하는 \0이 나올 때까지 계속 출력



    /* puts() and fputs() */
    //char line[100];
    //while(get(line))    //while(gets(line) != NULL)
    //    puts(line);
    
    char line[100];
    while(fgets(line, 100, stdin))
        fputs(line, stdout);

    return 0;
}