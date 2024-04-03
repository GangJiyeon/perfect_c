#include <stdio.h>

int main()
{

    int n = 1;

    //옛날 방식
    lable1:

        printf("%d\n",n);
        n = n + 1;

        if(n == 10) go to out;
        goto lable1;

    out:


    n = 1;
    //현재
    while(n <= 10)
    {
        printf("%d\n", n);
        n = n + 1;
    }




    return 0;
}