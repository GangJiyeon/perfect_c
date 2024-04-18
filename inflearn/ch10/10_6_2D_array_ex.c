/*
10.6 2차원 배열 연습문제
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12
#define YEARS 3

int main() {

    double year2016[MONTHS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    double year2017[MONTHS] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    double year2018[MONTHS] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};

    double years[3][MONTHS];

    for(int i = 0; i < MONTHS; i++)
        years[0][i] = year2016[i];

    for(int i = 0; i < MONTHS; i++)
        years[1][i] = year2017[i];

    for(int i = 0; i < MONTHS; i++)
        years[2][i] = year2018[i];


    printf("[ Temperature Data ]\n");
    printf("Year\tindex : ");
    for(int k = 0; k < MONTHS; k++)
    {   
        printf("\t%d", k+1);
    }

    printf("\n");
    
    for(int i = 0; i < 3; i++)
    {
        printf("Year\t%d :\t", i);
        for(int k = 0; k < MONTHS; k++)
        {
            if(years[i][k] < 10)
                printf("\t%.1f", years[i][k]);
            else
                printf("\t%.1f", years[i][k]);
        }

        printf("\n");
    }
    
    return 0;
}

