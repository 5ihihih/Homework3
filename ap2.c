#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[----- [오인화] [2022078036] -----]\n\n");

    int list[5];
    int *plist[5];

    list[0] = 10;
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int));  //int의 크기만큼 메모리를 할당해 plist[0]이 가리키도록 한다

    printf("list[0] \t= %d\n", list[0]);   //list[0]에 저장된 값(10) 출력
    printf("list \t\t= %p\n", list);       //list[0]의 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); //list[0]의 주소 출력
    printf("list + 0 \t= %p\n", list+0);   //list[0]의 주소 출력
    printf("list + 1 \t= %p\n", list+1);   //list[1]의 주소 출력
    printf("list + 2 \t= %p\n", list+2);   //list[2]의 주소 출력    
    printf("list + 3 \t= %p\n", list+3);   //list[3]의 주소 출력
    printf("list + 4 \t= %p\n", list+4);   //list[4]의 주소 출력
    printf("&list[4] \t= %p\n", &list[4]); //list[4]의 주소 출력

    free(plist[0]);  //할당된 메모리 해제
}