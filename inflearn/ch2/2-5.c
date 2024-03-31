/*
변수를 선언하는 방법
*/

#include <stdio.h>

//출력데이터타입 함수명 매개변수?
int main(void)
{//중괄호(curly bracket = 물결괄호): 중괄호로 함수의 몸체(body) 영역을 표시

    //빈 공간은 사람이 편하게 읽기 위해 있는것임

    //변수선언하기: 자료형 변수이름;, 규칙은 따로 공부하자 너무 힘들다, __나 _는 그냥 쓰지 말자
    int x; //decalation => int 하나를 담을 메모리 공간을 확보했고, 메모리 공간을 x라는 변수를 통해 접근
    int y, z;

    x = 1;  //숫자 1을 x에 할당(assignment)
    y = 2;
    z = x + y;

    //값 확인 방법: 콘솔창에 출력, 디버거를 이용해 메모리 내부 값을 확인


    int num;    //굳이 위에 변수 선언 안해도 된다
    return 0;   //운영체제에게 돌려주는 값

    //return 이후에 코드를 입력해도 아무것도 반영되지 않는다.
}