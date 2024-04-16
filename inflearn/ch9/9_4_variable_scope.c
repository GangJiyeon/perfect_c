/*
9.4. 변수의 영역과 지역변수
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int int_max(int i, int j);

//파일영역변수 => 파일전체에서 접근 가능
int a;

int main()
{
    int a;  //더 작은 범위에서 새로 선언된 변수로 바뀐다
    a = int_max(1, 2);

    printf("%d\n", a);
    printf("%p\n", &a); //p=> 포인터, &=>주소값을 알려준다

    {
        //이전 변수 a와 다른 변수다
        //해당 영역 안에서만 유효하다
        int a = int_max(4, 5);  
        printf("%d\n", a);
        printf("%p\n", &a);

        int b  = 123;
    }

    printf("%d\n", a);  //기존 a
    printf("%p\n", &a);

    return 0;
}


int int_max(int i, int j)
{
    //지역변수
    //변수를 사용할 수 있는 영역 => 변수가 선언된 영역 {}
    int m;  //stack frame
    m = (i > j) ? i : j;
   
    return m;
}