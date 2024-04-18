/*
10.4. 포인터와 배열
*/

#include <stdio.h>

int main() {
    
    int arr[10];
    int num = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < num; ++i)
        arr[i] = (i + 1) * 100;

    int *ptr = arr;

    //전부 값이 같음 
    printf("%p %p %p\n", ptr, arr, &arr[0]);

    //전부 값이 같음, +8(4 * 2)
    ptr += 2;
    printf("%p %p %p\n", ptr, arr + 2, &arr[2]);

    //invalid
    //arr += 2; 

    //warning => 괄호 조심
    printf("%p %p %p\n", *(ptr + 1), *(arr + 3), arr[3]);

    int *ptr2 = NULL;
    ptr2 = arr; 

    /*
    for(int i = 0, *ptr = arr; i < num; ++i)
        printf("%d %d\n", *(ptr + 1) , arr[i])
    */
    for(int i = 0; i < num; ++i)
        printf("%d %d\n", *ptr2++, arr[i]);

    return 0;
}