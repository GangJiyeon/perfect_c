/*
10.5. 2���� �迭�� �޸�
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

    //���� => �ٱ� ����
    for(int j = 0; j < 2; ++j)
    {
        //���� => ���� ����
        for(int i = 0; i < 3; ++i)
            printf("%d ", arr[j][i]);

        printf("\n");
    }
    printf("\n");

    
    int *ptr = &arr[0][0];
    
    for(int k = 0; k < 6; k++)
        printf("%d ", ptr[k]);//�����͸� �迭ó��

    printf("\n\n");

    //��ü �迭, {} �� �� ũ��
    printf("%zd %zd\n", sizeof(arr), sizeof(arr[0]));
    
    return 0;
}
