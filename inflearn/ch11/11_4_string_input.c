/*
11.4. 문자열을 입력받는 다양한 방법들
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STRLEN 81

char *custom_string_input(char *st, int n);

int main()
{
    /*creating space*/
    //char *name = ""; => run-time error
    //char name[128];
    //int result = scanf("%s", name);

    /*scanf() vs gets()
    -scanf(): reads one word
    -gets(): reads one line and removes \n and add \0
    */

    //char words[STRLEN] = "";    //warning without initialization
    //gets(words);                
    /*gets()--범위초과 시 runtime error
    gets receives pointer. no idea when string ends

    gets_s(words, sizeof(words)); - C11
    int result = scanf("%s",words);
    --범위초과 시 runtime error
    */

    //printf("start\n");
    //printf("%s", words);    //no \n at the end
    //puts(words);            //puts() adds \n ant the end
    //puts("end");

    /*fgets() and fputs()*/
    char words[STRLEN] = "";
    fgets(words, STRLEN, stdin); //dose NOT remove \n
    //원래는 파일 입력을 받을 때 사용, 마지막 인자에 stdin 입력 시 콘솔입력 가능

    //\n없애기
    int num = 0;

    while(words[num] != '\n' && words[num] != '\0')
        num++;

    if(words[num] == '\n')
        words[num] = '\0';

    fputs(words, stdout);
    fputs("end", stdout);

    /*small array - 크기-1(null)까지만 받음*/
    char small_array[5];
    puts("enter long strings:");
    fgets(small_array, 5, stdin);
    fputs(small_array, stdout);
    printf("%p\n", small_array);
    printf("%p\n", fgets(small_array, 5, stdin));
    //%p 출력값 동일
    //fgets => 반환값이 null(EOF)이 될 수 도 있음

    //한번에 받아들일수 있는 건 5개이지만, 반복해서 더 긴 문자를 받을 수 있음

    char array[5];
    puts("enter long strings");
    while(fgets(array, 5, stdin) != NULL && array[0] != '\n')
        fputs(array, stdout);

    char str1[6], str2[6];
    int cnt = scanf("%5s %5s", str1, str2);
    //int cnt = scanf("%6s %6s", str1, str2); => runtime error
    //int cnt = scanf_s("%5s %5s", str1, 6, str2, 6);   
    //입력값, 가장 크게 입력받을 수 있는 사이즈
    printf("%s|%s", str1, str2);

    return 0;

}

char *custom_string_input(char *st, int n)
{
    char *ret_ptr;
    int i = 0;

    ret_ptr = fgets(st, n, stdin);
    if(ret_ptr)
    {
        while(st[i] != '\n' && st[i] != '\0')
            i++;

        if(st[i] == '\n')
            st[i] = '\0';
        else    
            while(getchar() != '\n')    //버퍼비우기
                continue;
    }

    return ret_ptr;
}