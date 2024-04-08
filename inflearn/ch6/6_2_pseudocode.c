/*
의사코드: Pseudocode(수도코드)
=>  프로그램을 인간의 언어를 사용해 코드와 비슷한 내용을 
    조금 더 이해하기 쉽도록 표현할 때 사용하는 코드

    문법생각 X, 논리 자체에 집중, 보통 영어로 적는다
*/
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

/*
------- pseudocode -------
1. initialize sum to 0
2. prompt user
3. read input
4. while the input is an integer
    => whille getting and testing the value succeeds process the value
    add the input to sum,
    prompt user,
    then read next input
5. after input complete, print sum
*/

int main()
{
    int num, sum = 0;

    printf("Enter an integer (q to quit) : ");

    while (scanf("%d", &num) == 1)
    {
        sum += num;
        printf("Enter next integer (q to quit) : ");
    }
    
    printf("sum : %d\n", sum);

    return 0;
}