/*
manifest constants => define을 이용해서 선언이 된 기호적 상수
*/
#include <stdio.h>  
#include <limits.h> //INT_MAX
#include <float.h>  //FLT_MAX

#define PI 3.141592 //manifest constants, symbolic constants 
//사칙연산 가능, 상수라서 값이 바뀌진 않음, 변수가 아님

int main()
{
    printf("PI is %f\n", PI);
    printf("Biggest int: %d\n", INT_MAX);
    printf("One byte in this system is %d bits\n", CHAR_BIT);
    printf("Smallest normal float %e\n", FLT_MIN);

    return 0;

}