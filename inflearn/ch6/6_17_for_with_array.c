/*
6.17. for 루프를 배열과 함께 사용하기
*/

#define _CRT_SECURE_NO_WARING
#include <stdio.h>

#define SIZE 5

int main()
{
    int my_array[SIZE];

    //prepare for array data
    for(int i = 0; i < SIZE; ++i)
    {
        // index 값이 많아지면 기능별로 쪼개서 적는 게 효율적일 수 도 있다
        my_array[i] = i;
        printf("my_array[%d] : %d\n", i, my_array[i]);
    };

    printf("Enter %d numbers : ", SIZE);

    
    
    return 0;
}