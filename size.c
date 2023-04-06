#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("[----- [오인화] [2022078036] -----]\n\n");
    
    int **x;  //이중포인터 x를 선언한다

    printf("sizeof(x) = %lu\n", sizeof(x));     //이중포인터의 크기를 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x));   //이중포인터가 가리키는 값의 크기(주소의 크기) 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //int형을 가리키는 포인터이므로 4byte 출력
}