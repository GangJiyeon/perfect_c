/*
    perfect_c / ch_03 / 04integer.c
    2024.01.19 jiyeon
*/

#include <stdio.h>
int main(void){

    short sVar = 32000;         //-32767에서 32767까지
    int iVar = -2140000000;     //약 21억까지

    //C99이후 추가된 자료형
    long long dist1 = 2720000000000;
    __int64 dist2 = 4500000000000;

    //long long과 _-int64는 형식제어문자로 %lld를 사용한다
    printf("지구와 천왕성 간의 거리(km): %lld\n", dist1);
    printf("태양과 해왕성 간의 거리(km): %lld", dist2);

    return 0;

}

