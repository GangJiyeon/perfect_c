/*
8.2. ������ ��(eof)
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
    int c;

    //getchar() : �Է¹��� ���� ����, ������! => -1 �ü������ return
    //stream : ��ǻ�ʹ� �������� ��Ʈ��
    //EOF: �� ó������ ctrl + z, ��Ʈ���� ���� ���������� ǥ���� �� ���
    //ctrl + c : ���۷����� �ý����� �������� ���α׷� ���� ����
    
    while((c = getchar()) != EOF) //EOF = -1
    {
        putchar(c);
 
    }

    return 0;
}