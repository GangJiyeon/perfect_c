#include <stdio.h>
#include <limits.h>

int main()
{
    printf("%10i\n", 1234567);          //___1234567
    printf("%-10i\n", 1234567);         //1234567___
    printf("%05i\n", 123);              //00123

    printf("%+i, %+i\n", 123, -123);    //123, -123
    printf("% i, % i\n", 123, -123);    //_123, -123    

    printf("%X\n", 17);                 //11(16진수 출력)
    printf("%#X\n", 17);                //0X11
    
    printf("%*i\n", 7, 456);            //첫번째 인자가 *자리로 들어감

    printf("\nPrecision\n");
    printf("%.3n\n", 1024);             //1024
    printf("%.5d\n", 1024);             //01024 
    
    printf("%.3f\n", 123456.123456);    //123456.123
    printf("%.3f\n", 123456.1235);      //123456.124
    
    printf("%10.3f\n", 123.45678);      //___123.457
    printf("%010.3f\n", 123);           //000123.457

    printf("%.5s\n", "ABCDEFGHIJKLMN"); //ABCDE
    printf("%.s\n", "ABCDEFGHIJKLMN");  //
    
    printf("%hhd  %hd %d\n", 257, 257, 257);    //1 257 257
    printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);    //-2147483648 2147483648 2147483648

}