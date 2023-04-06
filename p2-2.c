#include <stdio.h>

void print_one(int *ptr, int rows);

int main()
{
    printf("[----- [오인화] [2022078036] -----]\n\n");
    
    int one[] = {0, 1, 2, 3, 4};    

    printf("one = %p\n", one);          //one[0]의 주소 출력
    printf("&one = %p\n", &one);        //one[0]의 주소 출력
    printf("&one[0] = %p\n", &one[0]);  //one[0]의 주소 출력
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5);  //함수를 호출해 배열의 주소와 정수를 넘긴다

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5);      //함수를 호출해 배열의 주소와 정수를 넘긴다

    return 0;
}

void print_one(int *ptr, int rows)  //배열의 주소와 정수를 받는다
{
    int i;
    printf ("Address \t\t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));  //배열의 주소와 배열의 값을 출력한다
    printf("\n");
}