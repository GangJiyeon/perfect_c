/*
9.9. 이진수 변환 예제
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

/*
10

10 / 2 = 5, remainder = 0
5 / 2 = 2, remainder = 1
2 / 2 = 1, remainder = 0
1 / 2 = 0, remainder = 1
*/

void print_binary(unsigned long quotient);
void print_binary_loop(unsigned long n);

int main()
{

    unsigned long num = 10;

    print_binary_loop(num);
    print_binary(num);

    printf("\n");

    return 0;
}

void print_binary_loop(unsigned long n)
{
    int quotient = n, remainder;

    while(1)
    {
        remainder = quotient % 2;
        quotient /= 2;
        
        printf("%d ", remainder);

        if(quotient <= 0)
            break;
       
    }

    printf("\n==============================\n");
}


void print_binary(unsigned long quotient)
{
    int remainder;

    if(quotient >= 2)  
        print_binary(quotient / 2) ;

    printf("%d ", quotient % 2);

}