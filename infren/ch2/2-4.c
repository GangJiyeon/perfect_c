/*
[[자료형이 필요한 이유]]

변수 => 우리가 메모리의 주소를 직접 다루지 않고도 그 메모리에 데이터가 저장되어 있는 공간을
        수학의 변수처럼 직관적으로 사용할 수 있게 해주는 존재


        int x; =>변수에 담길 데이터가 어떠한 형태인지를 미리 지정해야 한다, 자료형(자료의 형태)

        자료형이 왜 필요할까?
        >cpu에게 자료형을 미리 알려주어야 적합한 연산방법을 사용해 연산을 할 수 있음
        >데이터 차이로 인한 메모리 공간의 소모량, 연산속도 차이가 있음
*/


#include <stdio.h>

int main(void)
{

    //C언어의 자료형들
    int a;
    short b;
    char c;
    double d;
    float f;
    
    return 0;
}