/*
10.10. const와 배열과 포인터
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    //type qualifiers: const, volatile, ...

    const double PI = 3.141592;

    const int arr[5] = {1, 2, 3, 4, 5};
    //arr[1] = 123; =>invaild

    const double arr2[3] = {1.0, 2.0, 3.0};
    //arr[0] = 100.0; =>invaild

    /*
    const 자료형 *포인터 = 변수값; =>포인터가 가리키는 변수의 메모리값 변경X
    자료형 *const포인터 = 변수값; =>포인터 값 자체를 못바꿈

    */
    const double *pd = arr2;
    //invaild
    //*pd = 3.0;          //pd[0] = 3.0; arr2[0] = 3.0;
    
    //invaild
    //pd[2] = 1024.0;     //arr2[2] = 1024.0;

    printf("%f", pd[2]);

    pd++; //allowed, 범위초과


    return 0;
}