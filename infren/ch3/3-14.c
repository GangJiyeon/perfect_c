#include <stdio.h>
#include <complex.h>

int main(int argc, char const *argv[])
{
    //보통 직접 만들어서 사용한다
    double _Complex z = 1 + 2*I;

    z = 1 / z;

    printf("1/(1.0+2.0i) = %.f%+.1fi\n", creal(z), cimag(z));
    return 0;
}
