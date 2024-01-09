#include <stdio.h> //헤더파일 stdio.h를 현재 위치에 삽입하라는 의미

/*
함수 puts와 printf를 사용하려면 첫줄에 #include <stdio.h>
*/

//main(): 컴퓨터 실행시 가장 먼저 호출되는 특별한 함수(CRT 함수 - C Runtime Startup function)
int main(void)//함수머리, void = 인자X
{ 
    //프로그램은 main() 내부의 코드를 순차적으로 실행한다
    printf("hello world\n");
    puts("C언어 재미있다!!");

    return 0;//반환값

//함수몸체
}