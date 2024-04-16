/*
9.12. 포인터의 작동원리
*/

/*
int a = 7;

int *a_ptr = &a;
-int형 변수의 주소를 저장하는 변수 
-*: asterisk
-&: 주소연산자

=>  포인터 변수에 저장되어 있는 값은 다른 변수의 주소
=>  직접적으로 데이터 저장X, 
    다른 메모리 공간이나 그 공간에 저장된 데이터(객체)를 간접적으로 가리키는 역할
*/


/*
indirection operator
*a_ptr = 8;
=> 주소값을 가진 변수를 찾아가서 8을 저장한다

간접접근    indirection
역참조      dereferencing
방향재지정  redirection

*/