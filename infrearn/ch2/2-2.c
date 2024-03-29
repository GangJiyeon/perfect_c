#include <stdio.h> //#붙은 것=> 전처리기(Preprocessor instruction)
/*
전처리기: 컴파일 하기 전에 처리한다는 의미
우리가 작성한 코드(문서) > 컴파일러: 문서 분석, 그에 맞는 프로그램을 만들어 줌
이때 효율적으로 문서작업을 하기 위해서는 다른 사람들이 미리 만들어둔 것을 쓰는 것이 좋음
이걸 해주는 게 전처리기
*/

//운영체제가 프로그램을 시작할 때 main이라는 함수를 가장 먼저 찾는다
int main(void)//main 함수 정의(선언과 다름) 시작, 문장(statement)
{// 영역(scope) 시작, 문장(statement)

    int a;  //변수(variable) 선언(declaration), 메모리를 사용하겠다!
    int b;
    int c;
    
    a = 1;  //변수에 값 대입(assignment), 1을 a에 넣겠다
    b = 2;  
    c = a + b;  //변수에 연산(operation) 결과 대입

    printf("Result is %i", c);  //함수호출(call or invoke)
    return 0;   //결과 값(value)을 반환(return) => 메인함수의 경우 return 값을 운영체제가 받아감
}// 영역의 끝, 문장