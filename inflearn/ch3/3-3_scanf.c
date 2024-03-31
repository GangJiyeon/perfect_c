#include <stdio.h>

int main(){
    int input = 0;
    printf("Please type in something:");
    scanf("%d", &input);    
    printf("%d", input);
    //&변수: 
    //&: ampersand
    /*
    받는 쪽에서 변수의 주소를 넘겨주고, 콘솔창에 입력한 숫자가 메모리에 저장됨
    
    변수의 주소를 알고 싶을 때 쓴다
    scanf함수가 이 주소를 통해서 메모리에 직접 접근할 수 있다
    여러개를 받을 수도 있다
    */
    //scanf()함수: 보안위험 있음
    return 0;
}