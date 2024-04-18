/*
10.2. 배열의 기본적인 사용방법
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12   //symbolic constant, macro

int main()
{
    //1. basic usage
    int high[MONTHS] = {2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 12, 4};

    for(int i = 0; i < MONTHS; i++)
        printf("%d ", high[i]);

    printf("\n");

    float avg = 0.0;

    for(int i = 0; i < MONTHS; ++i)
        avg += high[i];
    
    printf("average = %f\n", avg / (float)MONTHS);


    //초기화할 때만 통채로 값을 저장할 수 있고 이후에는 하나씩!
    high[0] = 1;
    high[1] = 2;



    //2. addresses
    printf("%p %p\n", high, &high[0]);  //배열의 대표주소는 첫번째 인덱스 주소!

    for(int i = 0; i < MONTHS; ++i)
        printf("%lld\n", (long long)&high[i]);
    
    printf("\n");


    /*
    3. compiler doesn't check whether indices are valid

    high[12] = 4;   //runtime error
    high[-1] = 123; //runtime error
    */

    const int low[3] = {-1, 0, 8};
    //배열의 원소들의 값을 바꿀 수 없음




    //4. 컴파일러, 컴파일 환경에 따라서 쓰레기값이나 0이 들어간다
    int not_init[4];
    
    for(int i = 0; i < 4; i++)
        printf("%d ", not_init[i]);


    //static을 사용하면 무조건 0 => storage class
    static int not_init2[4];
    
    for(int i = 0; i < 4; i++)
        printf("%d ", not_init2[i]);


    //5. partially initialized => 초기화되지 않은 것은 컴파일러가 0으로 채워줌
    int intsuff[4] = {2, 4};
    for(int i = 0; i < 4; i++)
        printf("%d ", intsuff[i]);


    //6. overrly initialized => error
    //int over[2] = {2, 4, 8, 6,};


    //7. omitting size
    const int power = {1, 2, 3, 4, 5};  //=> const int power[5]
    //배열의 크기 : sizeof(power);  => 동적할당에서는 작동을 안 한다
    //칸의 크기 : sizeof(int); or sizeof(poewr[0]);
    //칸의 수 : 배열의 크기 / 칸의 크기


    //8. designated initializers
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    //31 29 0 0 31 30 31 0 0 0 0 0 


    //9. specifying array sizes
    //possible
    int arr_1[MONTHS];      //symbolic integer constant
    double arr_2[123];      //liter integer constant
    float arr_3[3*4 + 1];
    float arr_4[sizeof(int) + 1];
    float arr_5[(int)1.5];

    //impossible
    //float arr_6[-10];
    //float arr_7[0];
    //flaot arr_8[1.5];

    //10. [VLA] variable-length array is optional from C11
    //in vs impossible, gcc is possible
    //int n = 5;
    //float arr[n];

    return 0;
}