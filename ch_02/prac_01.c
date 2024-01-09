#include <stdio.h>

int main(void)
{
    puts("Fortran"); //enter 처리된다
    puts("Algol");
    puts("Cobol");
    printf("BCPL ");  //enter 처리가 되지 않는다, 띄어쓰기는 반영된다
    printf(" B ");
    printf("C\n");
    return 0;
}
