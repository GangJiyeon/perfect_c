/*
9.2. �Լ��� ������Ÿ��
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <string.h> //strlen()

#define WIDTH 20
#define NAME "Gang Jiyeon"
#define ADRESS "Kimhae, Korea"

//�Լ��� ������Ÿ��( )
//=>��ȯ��, �Լ���, �Ķ���͸� �־ �ȴ�(���� �̸��� ��� �ȴ�)
//=>�����Ͽ����� ����, ����� �ȴ�
//=>��ŷ������ ����

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

//�ٵ�
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