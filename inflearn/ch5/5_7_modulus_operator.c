/*
나머지 연산자 %
*/

#include <stdio.h>
int main()
{
    
    int seconds = 0, minutes = 0, hours = 0;

    printf("input seconds: ");
    scanf("%d", &seconds);

    while (seconds >= 0)
    {
        minutes = seconds / 60;
        seconds = seconds % 60;

        hours = minutes / 60;
        minutes %= 60;
        printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

        printf("input seconds: ");
        scanf("%d", &seconds);
    }
    

    printf("good bye");

    int div, mod;

    div = 11 / 5;
    mod = 11 % 5;
    printf("div = %d, mod = %d\n ", div, mod);  // 2, 1

    div = 11 / -5;
    mod = 11 % -5;
    printf("div = %d, mod = %d\n ", div, mod);  // -2, 1

    div = -11 / -5;
    mod = -11 % -5;
    printf("div = %d, mod = %d\n ", div, mod);  // 2, -1
    
    div = -11 / 5;
    mod = -11 % 5;
    printf("div = %d, mod = %d\n ", div, mod);  // -2, -1

    return 0;
}
