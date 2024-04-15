/*
8.2. 파일의 끝(eof)
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
    int c;

    //getchar() : 입력받을 것이 없다, 끝났다! => -1 운영체제에게 return
    //stream : 컴퓨터는 데이터의 스트림
    //EOF: 줄 처음에서 ctrl + z, 스트림이 언제 끝나는지를 표시할 때 사용
    //ctrl + c : 오퍼레이팅 시스템이 실행중인 프로그램 강제 종료
    
    while((c = getchar()) != EOF) //EOF = -1
    {
        putchar(c);
 
    }

    return 0;
}