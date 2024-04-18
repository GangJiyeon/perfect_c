#include <stdio.h>

int main() {
    void *ptr = 0;
    //ptr -= 2; 산술연산 불가능  

    //ptr = -ptr;  //not woriking
    //ptr = +ptr;  //not woriking 

    /*subtraction*/
    int arr[10];
    int *ptr1 = &arr[3], *ptr2 = &arr[5]; 

    
    //ptr2 = ptr1 + ptr2 =>not woriking

    //meaning
    int i = ptr2 - ptr1;

    printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);

    return 0;
}