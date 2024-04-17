/*
6.12. 제논의 역설 시뮬레이션 예제
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /*
        simulation of a moving object

        - speed = 1.0 m/s
        - dt = 1.0s
        - distance traveled during dt = speed * dt

        - step 1 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m
        - step 2 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m + 1.0 m = 2.0 m
        - step 3 : 1.0 m/s * 1.0 s = 1.0 m, dist = 2.0 m + 1.0 m = 3.0 m
        - ......
    */

    const double speed = 1.0;
    const unsigned repeat_max = 10;

    double dt = 1.0;
    double time = 0.0;  //elapsed time
    double dist = 0.0;  //distance

    for(unsigned i = 0; i < repeat_max; ++i)
    {
        dist += speed * dt;
        time += dt;

        printf("elapsed time = %.10fs, distance = %.10fm\n", time, dist);

        dt *= 0.5;  //나누기보다 곱하기가 더 빠르다
    }


}