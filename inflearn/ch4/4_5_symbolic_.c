#define _CRT_SECURE_NO_WARMOMGS
#include <stdio.h>
//#define PI 3.141592f 
#define AI_NAME "Javis"// =없음!!!!

int main()
{

    //기호적 상수
    const float PI = 3.141592f;
    
    float radius, area, circum;
    
    printf("Hi, I'm %s\n", AI_NAME);
    printf("plz, input radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;    //컴파일러가 PI를 3.141592f로 교체하고 컴파일한다
    circum = 2.0 * PI * radius;

    printf("area is %f\n", area);
    
    return 0;
}