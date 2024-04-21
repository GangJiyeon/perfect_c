/*
11.1. ���ڿ��� �����ϴ� ���
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
    puts(words);    //warning => ���� ���� �� �� �Ἥ
    puts(pt1);

    words[3] = 'p';
    puts(words);
    
    //error
    //pt1[8] = 'A' => const�� ��� error �߻�

    char greeting[50] = "Hello, and"" How are" " you";
    puts(greeting);

    printf("\"To be, or not to be\" Hamlet said.\n");
    
    //*"���ڿ�" => ù��° ������ �ּҿ� ���� �ε𷺼� => ù����
    printf("%s, %p, %c\n", "we", "are", *"excellent programmers");


    //������ ĭ�� �˾Ƽ� �ʱ�ȭ���ش�
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