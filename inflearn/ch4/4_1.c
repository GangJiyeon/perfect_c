/*
// 문자열 입출력하기
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    /*
    char fruit_name;    //stores only one character

    printf("what is ur favorate fruit?\n");
    scanf("%c", &fruit_name); //be careful with &
    printf("wow~ u like %c!\n", fruit_name);
    */

    //배열 => 같은 데이터 타입의 저장공간을 여러 개 확보하는 것
    
    char fruits[10];    //1byte짜리 저장공간을 10개 확보, 자체가 주소이므로 &를 안 씀
    scanf("%s", fruits);
    printf("u like %s!\n", fruits);

    

    return 0;
}
