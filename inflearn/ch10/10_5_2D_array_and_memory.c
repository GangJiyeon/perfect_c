/*
10.5. 2차원 배열과 메모리
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int arr[2][3] = {{1, 2, 3},
                     {4, 5, 6}};
    /*
    int arr[2][3] = {1, 2, 3,
                     4, 5, 6};
    insufficient initializer                 
    int arr[2][3] = {1, 2} 
    */

    //가로 => 바깥 루프
    for(int j = 0; j < 2; ++j)
    {
        //세로 => 안쪽 루프
        for(int i = 0; i < 3; ++i)
            printf("%d ", arr[j][i]);

        printf("\n");
    }
    printf("\n");

    
    int *ptr = &arr[0][0];
    
    for(int k = 0; k < 6; k++)
        printf("%d ", ptr[k]);//포인터를 배열처럼

    printf("\n\n");

    //전체 배열, {} 한 줄 크기
    printf("%zd %zd\n", sizeof(arr), sizeof(arr[0]));
    
    return 0;
}
