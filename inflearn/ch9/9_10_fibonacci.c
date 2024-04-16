/*
9. 10. 피보나치 예제와 재귀 호출의 장단점
*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

/*
    Fibonacci sequence
    1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

    ex - fibonacci(5) = fibonacci(4) + finbonacci(3) = 3 + 2
*/

int fibonacci(int number);

int main()
{
    for(int cnt = 1; cnt < 13; ++cnt)
        printf("%d ", fibonacci(cnt));
    
    return 0;
}

int fibonacci(int number)
{
    if(number > 2) 
        return fibonacci(number - 1) + fibonacci(number - 2);
    else
        return 1;
}