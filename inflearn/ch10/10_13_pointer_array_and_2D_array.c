/*
10.13. �������� �迭�� 2���� �迭
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //two of 1D arrays

    int arr0[3] = {1, 2, 3};
    int arr1[3] = {4, 5, 6};

    //an array of pointers
    int *parr[2] = {arr0, arr1};

    for(int j = 0; j < 2; ++j)
    {
        for(int i = 0; i < 2; ++i)
        {
            printf("%d(==%d, %d) ", parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
        }
    }

    //array of string of diverse lengths example
    //�迭�� �� ���Ҵ� �ش� ���ڿ��� ù��° �ּ�
    char *name[] = {"aladdin", "jasmine", "magic carpet", "genie"};
    const int n = sizeof(name) / sizeof(char*);   //n = 4

    for(int i = 0; i < n; i++)
        printf("%s at %u\n", name[i], (unsigned)name[i]);
    printf("\n");

    char aname[][15] = {"aladdin", "jasmine", "magic carpet", "genie", "jafar"};

    const int an = sizeof(aname) / sizeof(char[15]);

    for(int i = 0; i < an; ++i)
        printf("%s at %u\n", aname[i], (unsigned)& aname[i]);   
    printf("\n");

    return 0;
}