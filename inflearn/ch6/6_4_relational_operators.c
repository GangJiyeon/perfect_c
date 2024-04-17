/*
6.4. 관계 연산자(relational operators)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>   //fabs()

int main()
{

    /*======= relational operators =======  
    |   <       is less than   
    |   <=      is less than or equal to
    |   ==      is equal to
    |   >=      is greater thant or equal to
    |   >       is greater than
    |   !=      is not equal to
    ======================================*/


    int n = 0;
    while (n++ < 5)
        printf("%d", n);

    printf("\n");

    char c = 'A';
    while(c != 'Z')
        printf("%c", c++);

    printf("\n");
    const double PI = 3.1415926525897932;   //최근 프로그램에서는 define 보다 const 권장
    double guess = 0.0;

    printf("\n");
    printf("input pi: ");

    scanf("%lf", &guess);
    
    //while(guess != PI)
    while(fabs(guess - PI) > 0.01)
    {
        printf("fool~~~! try again ><\n");
        scanf("%lf", &guess);
    }

    printf("goo~~~D");
    return 0;
}