/*
7.11. 최대, 최소, 평균 구하기 예제
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

int main()
{

    float max = -FLT_MAX;
    float min = FLT_MAX;
    float input, sum, avg = 0;
    int num = 0;
    char ch;

    while(scanf("%f", &input) == 1)
    {
        if(input < 0) continue;

        min = (input <= min) ? input : min;
        max = (input >= max) ? input : max;
        sum += input;
        num++;
    }

    avg = sum / num;

    if(sum > 0)     
        printf("min = %f, max = %f, avg = %f", min, max, avg);
    
    return 0;
}