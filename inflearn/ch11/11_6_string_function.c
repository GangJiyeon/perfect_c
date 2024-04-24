/*
11.6. 다양한 문자열 함수들
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <string.h>

void fit_str(char *str, unsigned size);

int main()
{
    /*
        strlen(): returns length of th string
    */

    char msg[] = "just,""do it!";
    puts(msg);
    printf("length %d\n", strlen(msg));
    fit_str(msg, 4);
    puts(msg);
    printf("length %d\n", strlen(msg));


    /*
        strcat() and strncat() : string concatenation
    */

    char str[100] = "first string";
    char str2[] = "second string"; 
    strcat(str, ", ");
    strcat(str, str2);
    strncat(str, str2, 3);
    puts(str);

    /*
        strcmp() and strncmp() : compare strings (not characters)
    */

    printf("%d\n", strcmp("A", "A"));   //같으면 0
    printf("%d\n", strcmp("A", "B"));   //앞이 빠르면 -1
    printf("%d\n", strcmp("B", "A"));   //뒤가 빠르면 1
    printf("%d\n", strcmp("Hello", "Hello"));
    printf("%d\n", strcmp("bananas", "bananas"));       //-1
    printf("%d\n", strcmp("bananas", "mananna"));       //1
    printf("%d\n", strcmp("bananas", "mananna", 6));    //0

    /*
        strcpy() and strncpy()
    */
    char dest[100] = "";    //make sure memory is enough
    char source[] = "start programming!";
    
    //error
    //dest = source
    //dest = "start programming!"

    strcpy(dest, source);
    strcpy(dest, source, 5);    // '\0' is not added 
    strcpy(dest, source + 6);
    strcpy(dest, source);
    strcpy(dest + 6, "coding!");
    puts(dest);

    /*
        sprintf()
    */
    char str[100] = "";
    int i = 123;
    double d = 3.14;
    sprintf(str, "%05d.png %f", i, d);
    puts(str);


    printf('%s\n', strchr("hello, world", 'W'));

    printf('%s\n', strpchr("hello, world", 'ABCDE'));
    printf('%s\n', strpchr("hello, world", 'abcde'));

    printf('%s\n', strrchr("hello, world, hello, wolrd", '1'));

    printf('%s\n', strstr("hello, world", "wor"));
    printf('%s\n', strstr("hello, world", "wor"));

    return 0;
}

void fit_str(char *str, unsigned size)
{
    if(strlen(str) > size)
        str[size] = '\0';
}