#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double seed_money, target_money, annual_interest;

    printf("input seed money: ");
    scanf("%lf", &seed_money);

    printf("input target money: ");
    scanf("%lf", &target_money);

    printf("input annual interset (%%): ");
    scanf("%lf", &annual_interest);

    double fund = seed_money;
    int year_count = 0;

    while(fund < target_money)
    {
        fund = fund + fund * annual_interest / 100.0;
        year_count += 1;
    }

    printf("it takes %d years\n");

    return 0;

}