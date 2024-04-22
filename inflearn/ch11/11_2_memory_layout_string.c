/*
11.2. memory layout and strings

-������/gcc ����
[�ּҰ� ���� ����]

>command-line arguments and environment variables

>stack: ���������� ���, �޸� ũ�⸦ �� ��, ũ�� ����
>free: ��������, heap�̳� stack�� ũ�Ⱑ ���ϸ鼭 ����ϰ� �ȴ�
>heap: �޸� ũ�⸦ �� ��, ũ�� ����

>BSS(block started by symbol) segment: 
    �ʱ�ȭ���� ���� ����/���� ������, ũ�� ����
>DATA segment : �ʱ�ȭ�� ����/��������, ũ�����

>TEXT segment: ���α׷� �ڵ�, ũ�����
 -read write DATA segment : �б�/����
 -read only DATA segment : �б�����
[�ּҰ� ���� ����]
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
    const char *pt2 = "I am a string!.";    //text segment�� ������ �־ ������ �Ұ����ϴ�
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
    //ar1++; error => �迭��ü�� �ּҰ��� �����ϰ�, �ּҰ� ������ �Ұ���
    puts(++pt2);

    return 0;

}