/*
10.9. 포인터 연산 총 정리
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    /* pointer operations
    
    1. assignment
    2. value finding -> deferencing
    3. taking an integer to a pointer
    4. adding an integer to a pointer
    5. incrementing a pointer
    6. subtracting an integer from a pointer
    7. decrementing a pointer
    8. differencing
    9. comparisons
    
    */

    int arr[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;

    //---assignment---
    ptr1 = arr; 

    //---value finding -> deferencing---
    //ptr1: 연결된 변수의 주소값 
    //*ptr1: 연결된 변수값 
    //&ptr1: 포인터의 주소값
    printf("%p %d %p\n", ptr1, *ptr1, &ptr1);

    //---address-of operator &---
    ptr2 = &arr[2];
    printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

    //---adding an integer from a pointer
    ptr3 = ptr1 + 4;
    printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

    //---differencing---
    //t is for pointer difference
    printf("%td\n", ptr3 - ptr1);

    //---incrementing, ptr1 = ptr1 + 1---
    ptr1++;
    ptr1--;
    --ptr1;
    ++ptr1;

    //포인터도 변수임
    if(ptr1 == ptr3)
        printf("same\n");
    else
        printf("different\n");

    double d = 3.14;
    double *ptr_d = &d;

    if(ptr1 == (int*)ptr_d)
        printf("same\n");
    else    
        printf("different\n");

    return 0;
}