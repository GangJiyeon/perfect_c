/*
6.15. 중첩된 루프(nested loop)
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{

    int repeat;
    char start_c;
    char finish_c;

    printf("repeat : _\b");
    scanf("%d", &repeat);

    fflush(stdin);
    printf("start : _\b");
    scanf("%c", &start_c);

    fflush(stdin);
    printf("finish : _\b");
    scanf("%c", &finish_c);
    
    //q1
    int r = repeat;
    for(int i = 1; i <= r; ++i)
    {
        /*
        for(char sc = start_c; sc <= finish_c; ++sc)
        {
            printf("%c ", sc);            
        } 
        */

        char sc = start_c;
        while(sc <= finish_c)
        {
            printf("%c ", sc);  
            ++sc;
        };
        
        printf("\n");
    };

    printf("==========================================\n");
    //q2

    int row_num;
    printf("row_num : _\b");
    scanf("%d", &row_num);
    

    for(int i = 1; i <= row_num; ++i)
    {
        char ch = 'A';
        for(int plus = 0; plus < i; ++plus)
        {
            printf("%c ", ch + plus);
        }
        
        printf("\n");
    }

    printf("==========================================\n");
    //q3
    char s_c = start_c; 
    char f_c = finish_c;   

    //시작문자와 종료문자의 차이만큼 반복(행)
    for(int i = finish_c - start_c; i >= 0; --i)    
    {
        //시작문자 = 종료문자 - 1
        /*
        A(65) = G(71) - i(71-65)
        A(66) = G(71) - i(71-65-1)
        */
        s_c = f_c - i; 

        //시작문자가 종료문자와 같아질때까지 출력(열)
        while(s_c <= f_c)
        {
            printf("%c ", s_c);
            ++s_c;
        }

        printf("\n");
    }

}