/*
9.3. 함수의 자료형과 반환값
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

//반환자료형 => 함수의 자료형처럼 생각할 수 있다
//정수형 반환자료형은 생략이 된다. 근데 vscode에선 안되는 듯
int int_min(int, int);

int main()
{
    int i1, i2;

    while(1)
    {
        printf("input two integers : ");

        if(scanf("%d %d", &i1, &i2) != 2)
            break;

        int lesser = int_min(i1, i2);

        //int lesser = min;

        printf("the lesser of %d and %d is %d \n", i1, i2, lesser);

        //printf("the lesser of %d and %d and is %d \n", i1, i2, int_mit(i1, i2));

    }
    
    printf("end.\n");
}

int int_min(int i, int j)
{
    //local vaiables
    int min;

    if(i < j)
        min = i;
    else
        min = j;

    //return (i > j) ? i : j;
    return min;
}