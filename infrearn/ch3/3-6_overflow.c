#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    unsigned int i = 0b11111111111111111;
    unsigned int u = UNIT_MAX;
    printf("%u", sizeof(i)); //d, u 등 형식 지정자를 잘 맞춰야함
    printf("%u", sizeof(u));
    return 0;
}
