/*
8.7. �Է� ��Ʈ���� ����
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{

    //getchar(): ��ĭ���� �޾Ƶ���
    //scanf(): ���� ������ ����ڰ� �� ���� �׸��� �� �Է��ߴٰ� ����

    char str[255];
    int i, i2;
    double d;

    scanf("%s %d %lf", str, &i, &d);
    printf("%s %d %f\n", str, i, d);

    //or (see the difference)

    scanf("%s %d %d", str, &i, &i2);
    printf("%s %d %d\n", str, i, i2);

    //or (see the difference)
    
    char c;
    while((c = getchar()) != '\n')
        putchar(c);

    printf("\n");

    return 0;
}