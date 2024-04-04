/*
나머지 연산자 %
*/

#include <stdio.h>
int main()
{
    
    int seconds = 0, minutes = 0, hours = 0;

    printf("input seconds: ");
    scanf("%d", &seconds);

    minutes = seconds / 60;
    seconds = seconds % 60;

    hours = minutes / 60;
    minutes %= 60;
    
    printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
    printf("good bye");
    
    return 0;
}
