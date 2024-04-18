/*
10.7. 배열을 함수에게 전달해주는 방법 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
-- possible prototype --
double average(double data_array[], int n);
double average(double [], int n);
double average(double *data_array, int n);
double average(double *, int n);
*/

double average(double arr[], int num);

int main()
{
    double arr1[5] = {10, 13, 12, 7, 8};
    double arr2[5] = {1.8, -0.2, 6.3, 13.9, 20.5};

    printf("address = %p\n", arr1);
    printf("size = %zd\n", sizeof(arr1));

    //int num = sizeof(arr1) / sizeof(arr1[0]);
    int num1 = sizeof(arr1) / sizeof(arr1[0]);
    int num2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("avg = %f\n", average(arr1, num1));
    printf("avg = %f\n", average(arr2, num2));

    return 0;
}

double average(double arr[], int num){

    double avg = 0.0;
    
    
    for(int i = 0; i < num; ++i)
        avg += arr[i];
    
    avg /= (double)5;

    return avg;

}
