/*
6.18. 루프 안에서 함수의 반환값 사용하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int base = 0;
int time = 0;
int sq = 1;

//프로토타입 => 컴파일할 때 이런게 있다~~~~ 
//컴파일러는 링킹과정에서 알맹이를 읽는다
int square(int base, int time);
void input();

int main()
{
    input();
    printf("square => %d", square(base, time));

    return 0;
};

int square(int base, int time)
{
    for(int i = 1; i <= time; ++i)
    {   
        sq *= base;
    }
    return sq;
};

void input()
{
    printf("input base: _\b");
    scanf("%d", &base);

    printf("input exp: _\b");
    scanf("%d", &time);
};
