/*
10.3. �迭 �Ű������� const
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� �ٲٰ� ���� ������ const�� �Է��Ѵ�
void print_array(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void add_value(int arr[], int n, int val)
{
    int i;
    
    for(i = 0; i < n; i++)
        arr[i] += val;

}

int sum(const int arr[], int n)
{
    int i;
    int total = 0;

    for(i = 0; i < n; i++)
        total += arr[i];
    
    return total
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    add_value(arr, n, 100);
    print_array(arr, 5);

    int s = sum(arr, n);

    printf("sum is %d\n", sum);

    return 0;
}