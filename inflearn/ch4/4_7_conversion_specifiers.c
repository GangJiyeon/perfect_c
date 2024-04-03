/*
printf() 함수의 변환 지정자들


printf(제어-문자열, 아이템1, 아이템2)
=>아이템: 변수, 상수 표현식 등
=>변환지정자: 형식지정자 중 이 데이터타입을 어떤 형식으로 출력할지 맞춰주는 것


//형식지정자(conversion specifier=format specifier)
%[flasgs][width][.precision][length]specifier


specifier => 자료형을 지정,  변환지정자
%a: 부동소수점수, 16진수, p-표기법  
%A: 부동소수점수, 16지수, p-표기법  
%c: 한글자
%d(또는 %i): 부호가 있는 10진(decimal) 정수(integer)
%e: 부동소수점수, e-표기법 =>소문자
%E: 부동소수점수, E-표기법 =>대문자
%f: 부동소수점수, 10진수 표기
%g: 값에 따라서 %e나 %f사용, 지수가 -4보다 작거나 정밀도보다 크거나 같을 경우에는 %e 사용 => 더 짧은 것으로 알아서 선택해줌
%G: 값에 따라서 %F나 %f사용, 지수가 -4보다 작거나 정밀도보다 크거나 같을 경우데는 %E 사용

%o: 부호가 없는 8진(octal) 정수
%p: 포인터
%s: 문자열
%u: 부호가 없는 10진 정수
%x: 부호가 없는 16진 정수, 소문자 알파벳 사용
%X: 부호가 없는 16진 정수, 대문자 알파벳 사용
%%: 퍼센트 기호 출력

*/

#include <stdio.h>
#include <limits.h> //INT_MAX
#include <float.h>  //FLT_MAX
int main()
{
    //저장할 수 있는 양만 저장하고 컴파일러가 무시해버린다
    double d = 3.141592652589793238462643383279502884191;

    printf("%c\n", 'A');
    printf("%s", "i love you\n");
    printf("even if there's a small chance, \
    we owe this to everyone who's not in this room to try.\n");

    printf("\n");
    printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX); //overflow
    printf("%u %u %u\n", 1024, -1, UINT_MAX);               //overflow

    printf("\n");
    printf("%f %f %lf\n", 3.141592f, d, d);
    printf("%a %A\n", d, d);
    printf("%e %E\n", d, d);

}