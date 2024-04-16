/*
9.2. 함수의 프로토타입
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <string.h> //strlen()

#define WIDTH 20
#define NAME "Gang Jiyeon"
#define ADRESS "Kimhae, Korea"

//함수의 프로토타입( )
//=>반환값, 함수명, 파라미터만 있어도 된다(변수 이름은 없어도 된다)
//=>컴파일에러가 없고, 빌드는 된다
//=>링킹에러는 생김

/*
-signature
-create declaration definition
*/

void print_chars(int i, char ch[]);
void print_blank(char ch[]);
void print_center(char ch[]);

int main()
{
    print_chars(WIDTH, "*");    //argument, actual argument(parameter)
    print_center(NAME);
    print_center(ADRESS);
    print_chars(WIDTH, "*");
}

//바디
void print_chars(int num, char ch[])    //parameter, formal argument(parameter)
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