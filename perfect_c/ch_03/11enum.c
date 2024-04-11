#include <stdio.h>

int main(void)
{
    //열거형 상수
    enum DAY {SUN, MON, TUE, WED, THU, FRI, SAT};

    printf("sunday : %d\n", SUN);


    //값 지정하기
    enum SHAPE {POINT, LINE, TRI=3};
    printf("TRI= %d", TRI);

    
    return 0;
}