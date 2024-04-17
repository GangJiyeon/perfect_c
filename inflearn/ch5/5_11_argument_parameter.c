#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ansi function prototype declaration
void draw(int n);

int main()
{
    int i = 5;
    char c = '#';   //35
    float f = 7.1f;

    draw(i);
    draw((int)c);
    draw((int)f);

    return 0;

}

/*arguments vs parameters*/
//arguments => values
//parameters => variables

void draw(int n)
{
    while (n-- > 0)
    {
        printf("*");
    }

    printf("\n");   
}


