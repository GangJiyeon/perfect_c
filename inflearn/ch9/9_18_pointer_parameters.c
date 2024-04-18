/*
9.18. 포인터형 매개변수
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int, int);
void swap2(int*, int*);

int main()
{
    //main 안의 a, b
    int a = 123, b = 456;
    int *a_ptr = &a;
    int *b_ptr = &b;

    swap(a, b);
    printf("main : %d %d\n", a, b);     //swap이 안됨 

    swap2(a_ptr, &b);
    printf("main : %d %d\n", a, b);     //swao이 됨

    return 0;
}

void swap(int a, int b)
{
    //swap 안의 a, b는 main안의 a, b와 다르다
    //값에 의한 호출(call by value) : 변수가 새로 선언되고, 값만 같게 들어온다
    int temp = a;
    a = b;
    b = temp;

    printf("swap : %d %d\n", a, b);
}

void swap2(int* a_p, int* b_p)
{
    int temp = *a_p;
    *a_p = *b_p;
    *b_p = temp;
}