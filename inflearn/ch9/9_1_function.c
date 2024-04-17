/*
9.1. 함수가 필요할 때
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strlen()

#define WIDTH 20
#define NAME "Gang Jiyeon"
#define ADRESS "Kimhae, Korea"

void print_chars(int i, char ch[]);
void print_blank(char ch[]);
void print_center(char ch[]);

int main()
{
    print_chars(WIDTH, "*");
    print_center(NAME);
    print_center(ADRESS);
    print_chars(WIDTH, "*");
}

void print_chars(int num, char ch[])
{
    for(int i = 0; i < num; i++)
        printf("%s", ch);
    
    printf("\n");
}

void print_center(char ch[])
{
    print_blank(ch);
    printf("%s", ch);
    print_blank(ch);

    printf("\n");
}

void print_blank(char ch[])
{
    int blank = (WIDTH - strlen(ch)) / 2;

    for(int i = 0; i < blank; i++)
    {
        printf(" ");
    }

}