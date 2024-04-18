/*
10.10. const�� �迭�� ������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    //type qualifiers: const, volatile, ...

    const double PI = 3.141592;

    const int arr[5] = {1, 2, 3, 4, 5};
    //arr[1] = 123; =>invaild

    const double arr2[3] = {1.0, 2.0, 3.0};
    //arr[0] = 100.0; =>invaild

    /*
    const �ڷ��� *������ = ������; =>�����Ͱ� ����Ű�� ������ �޸𸮰� ����X
    �ڷ��� *const������ = ������; =>������ �� ��ü�� ���ٲ�

    */
    const double *pd = arr2;
    //invaild
    //*pd = 3.0;          //pd[0] = 3.0; arr2[0] = 3.0;
    
    //invaild
    //pd[2] = 1024.0;     //arr2[2] = 1024.0;

    printf("%f", pd[2]);

    pd++; //allowed, �����ʰ�


    return 0;
}