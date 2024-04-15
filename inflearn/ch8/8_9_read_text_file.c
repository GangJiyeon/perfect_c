/*
8.9. �ؽ�Ʈ ���� �б�
*/
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <stdlib.h> //exit()

int main()
{
    int c;
    FILE *file = NULL;  //*������ ����: �ּҰ� ����ȴ�
    char file_name[] = "my_file.txt";   //TODO: use scanf(...)

    /*
    fopen
    =>  file open
    =>  file�� stream�� ��� 
        file�� ���� �����͸� �о���ų� ������ �� �ִ� ��θ� ������
    =>  option
        -r: read
        -w: write
    */
    file = fopen (file_name, "r");  

    if(file == NULL)
    {
        printf("failed to open file.\n");
        exit(1);
    }

    while((c = getc(file)) != EOF)
        putchar(c);
    
    fclose(file);

    return 0;
}