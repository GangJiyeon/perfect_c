/*
11.3. ���ڿ��� �迭
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //arrays of character strings
    //�����ø� �ǰ� �־ �ؽ�Ʈ ���׸�Ʈ�� ����
    const char *mythings[5] = {
        "dancing in the rain",
        "counting apples",
        "watching movies with friends",
        "writing sad letters",
        "studying the C language"
    };

    //���ÿ� �迭�μ� �޸𸮸� ������ ����
    char yourtings[5][40] = {
        "studing the c++ language",
        "eating",
        "watching netfilx",
        "walking around till dart",
        "deleting spam emails"
    };

    //�����ͷ� ���ڿ��� �����ϸ� 
    //1. �����Ϸ��� �˾Ƽ� �� ���� �ΰ� ����� �޸𸮸� �Ƴ� �� �ִ�
    //2. read-only��, �ü�� ������ ���� �� ������ �Ұ����ϴ�
    const char *temp1 = "dancing in the rain";      
    const char *temp2 = "studing the c++ language";

    printf("%s %u %u\n", mythings[0], (unsigned)mythings[0], (unsigned)temp1);
    printf("%s %u %u\n", yourtings[0], (unsigned)yourtings[0], (unsigned)temp2);

    printf("%-30s %-30s\n", "my things:", "your things");
    for(int i = 0; i < 5; i++)
        printf("%-30s %-30s\n", mythings[i], yourtings[i]);


    printf("\nsizeof mythings: %zd, sizeof your yourthings: %zd\n",
            sizeof(mythings), sizeof(yourtings));

    //to print out what's in the memory
    //not a good idea to take advantage of this property
    for(int i = 0; i < 100; i++)
        printf("%c", mythings[0][1]);
    printf("\n");

    for(int i = 0; i < 200; i++)
        printf("%c", yourtings[0][1]);
    printf("\n");

    return 0;
} 