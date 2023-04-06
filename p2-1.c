#include <stdio.h>
#define MAX_SIZE 100

float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);

float input[MAX_SIZE], answer;
int i;

int main(void)
{
    printf("[----- [오인화] [2022078036] -----]\n\n");

    for(i=0; i<MAX_SIZE; i++)  //배열 input에 0부터 99까지 차례로 대입
        input[i] = i;

    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n"); 
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);     //배열 input의 주소 출력

    answer = sum1(input, MAX_SIZE);      //함수 sum1을 호출해 0부터 99까지 모두 더한 값 answer에 대입
    printf("The sum is: %f\n\n", answer);//answer 출력


    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n"); 
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);     //배열 input의 주소 출력

    answer = sum2(input, MAX_SIZE);      //함수 sum2을 호출해 0부터 99까지 모두 더한 값 answer에 대입
    printf("The sum is: %f\n\n", answer);//answer 출력


    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);     //배열 input의 주소 출력

    answer = sum3(MAX_SIZE, input);
    printf("The sum is: %f\n\n", answer);
}

float sum1(float list[], int n) {       //배열의 주소와 정수를 받는다
    printf("list \t= %p\n", list);      //배열의 주소 출력
    printf("&list \t= %p\n\n", &list);  //배열의 주소 출력

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];  //배열의 값들을 모두 더함
    return tempsum;          //더한 값 반환
}

float sum2(float *list, int n) {        //배열의 주소와 정수를 받는다
    printf("list \t= %p\n", list);      //배열의 주소 출력
    printf("&list \t= %p\n\n", &list);  //배열의 주소 출력

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list+i);  //배열의 값들을 모두 더한다
    return tempsum;            //더한 값 반환
}

float sum3(int n, float *list) {        //정수와 배열의 주소를 받는다
    printf("list \t= %p\n", list);      //배열의 주소 출력
    printf("&list \t= %p\n\n", &list);  //배열의 주소 출력

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list+i); //배열의 값들을 모두 더한다
    return tempsum;           //더한 값 반환
}