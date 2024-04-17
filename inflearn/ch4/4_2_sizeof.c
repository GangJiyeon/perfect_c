#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//구조체
struct MyStruct
{
    int i;
    float f;

};

int main()
{

    /* 1. sizeof basic types */
    int a = 0;
    unsigned int int_size1 = sizeof a;  //연산자로 분류하는 것이 정확한데, 함수로 생각해도 쓸 때 문제X
    unsigned int int_size2 = sizeof(int);
    unsigned int int_size3 = sizeof(a);

    size_t int_size4 = sizeof(a);       //size_t => unsigend int, 이식성을 위해 사용한다, 폴터블타입
    size_t float_size = sizeof(float);

    printf("size of int type is %u bytes.\n", int_size1);       //형식지정자: unsigned int => u
    printf("size of int type is %zu bytes.\n", int_size4);      //형식지정자: size_t => zu
    printf("size of float type is %zu bytes. \n", float_size);


    /* 2. sizeof arrays */
    //컴파일러가 크기를 알 수 있음 => 컴파일 타임에 크기 결정
    int int_arr[30];                             //int_arr[0] = 1024;, 120바이트
    
    //컴파일러는 모르고, 런타임에 알 수 있다 =>동적할당
    int *int_ptr = NULL;    //주소를 가질 수 있는 종이만 들고있음
    int_ptr = (int*)malloc(sizeof(int) * 30);  //int_ptr[0] = 1024;, 종이에 대표메모리 하나를 받아서 적음

    printf("size of array  = %zu bytes \n", sizeof(int_arr));
    printf("size fo pointer = %zu bytes\n", sizeof(int_ptr));


    /* 3. sizeof character array */
    char c = 'a';
    char string[10];    //maximally 9 character + '/0' (null character)

    size_t char_size = sizeof(char);
    size_t str_size = sizeof(string);
    
    printf("size of char type is %zu bytes.\n", char_size);
    printf("size of string type is %zu bytes.\n", str_size);
    

    /*4. sizeof structure */
    printf("%zu\n", sizeof(struct MyStruct));
    return 0;
}