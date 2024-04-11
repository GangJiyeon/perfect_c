/**************************************************************
//  참고: perfect C | chapter 3-1. 프로그래밍 기초
//  내용: C언어 기본구조, 문장, 블록, 주석
//  날짜: 2024.01.12.Fri Jiyeon
**************************************************************/


#include <stdio.h>//1. Preprocessor directives

int main(void)//2. Function main
//3. start of segment
{   
    //4. statement
    printf("hello");
    return 0;

}   
//5. end of segment


/*
1. 전처리기(Preproceessor directives)
    =>1: #include
        -전처리기로 컴파일 수행 전 전처리를 지시

    =>2: <stdio.h>
        -standard input output의 의미로 .h의 확장자를 가지는 헤더파일
        -표준입력 출력함수들이 포함되어 있음

=>컴파일 수행 전, 표준입력 출력함수가 포함되어 있는 헤더파일을 포함하는 작업을 해라!
*/


