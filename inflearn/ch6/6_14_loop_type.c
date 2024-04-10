/*
6.14. 어떤 루프를 사용할까
===========================================
진입조건: while, for
탈출조건: do while => 약간 잘 안쓰는 듯
===========================================
for vs while
1.
for(;test;)
while(test)

2.
//for
for(init; test; update)
    body;

//while
init;
while(test)
{
    body;
    update;
}

3.
for(int i = 0; i < 100; ++i)
while(scanf("%d", &num)==1)
===========================================
*/