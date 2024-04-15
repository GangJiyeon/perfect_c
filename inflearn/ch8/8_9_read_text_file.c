/*
8.9. 텍스트 파일 읽기
*/
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <stdlib.h> //exit()

int main()
{
    int c;
    FILE *file = NULL;  //*포인터 변수: 주소가 저장된다
    char file_name[] = "my_file.txt";   //TODO: use scanf(...)

    /*
    fopen
    =>  file open
    =>  file의 stream을 열어서 
        file로 부터 데이터를 읽어오거나 저장할 수 있는 통로를 열어줌
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