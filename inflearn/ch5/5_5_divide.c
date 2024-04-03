#include <stdio.h>

int main()
{
    printf("integer divisions\n");  //나머지 truncate
    printf("%d\n", 14/7);   //2
    printf("%d\n", 7/2);    //3.5 => 3
    printf("%d\n", 7/3);    //2.333 => 2
    printf("%d\n", 7/4);    //1.75 => 1
    printf("%d\n", 8/4);    //2

    printf("truncating toward zero(c99)\n");  
    printf("%d\n", -7/2);    //-3.5 => -3
    printf("%d\n", -7/3);    //-2.333 => -2
    printf("%d\n", -7/4);    //-1.75 => -1
    printf("%d\n", -8/4);    //-2

    printf("\nfloating division\n");  
    printf("%f\n", 9.0/4.0);    //2.250000
    printf("%f\n", 9.0/4);      //다른 자료형 *,/ 못하는데 컴파일러가 바꿔줘서 2.250000
}