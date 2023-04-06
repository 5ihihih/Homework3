#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[----- [오인화] [2022078036] -----]\n\n");

    int list[5];             //배열을 선언
    int *plist[5] = {NULL,}; //포인터 배열을 선언하고 모두 NULL포인터로 초기화

    plist[0] = (int *)malloc(sizeof(int)); //int의 크기만큼 공간을 할당해 plist[0]가 가리키도록 한다

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;  //plist[0]가 가리키는 공간에 200 대입

    printf("list[0] = %d\n", list[0]);      //list[0]의 값 출력
    printf("&list[0] = %p\n", &list[0]);    //list[0]의 주소 출력
    printf("list = %p\n", list);            //list[0]의 주소 출력
    printf("&list = %p\n", &list);          //list[0]의 주소 출력

    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]);      //list[1]의 값 출력
    printf("&list[1] = %p\n", &list[1]);    //list[1]의 주소 출력
    printf("*(list+1) = %d\n", *(list + 1));//list[1]의 값 출력
    printf("list+1 = %p\n", list+1);        //list[1]의 주소 출력

    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]);  //plist[0]이 가리키는 공간의 값 출력
    printf("&plist[0] = %p\n", &plist[0]);  //plist[0]의 주소 출력
    printf("&plist = %p\n", &plist);        //plist[0]의 주소 출력
    printf("plist = %p\n", plist);          //plist[0]의 주소 출력
    printf("plist[0] = %p\n", plist[0]);    //plist[0]의 값(가리키는 공간의 주소) 출력
    printf("plist[1] = %p\n", plist[1]);    //나머지 포인터들을 NULL포인터로 남아있다
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);

    free(plist[0]); //할당된 메모리 해제
}