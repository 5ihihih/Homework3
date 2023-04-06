#include <stdio.h>
#define MAX_SIZE 100

float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);

float input[MAX_SIZE], answer;
int i;

int main(void)
{
    printf("[----- [����ȭ] [2022078036] -----]\n\n");

    for(i=0; i<MAX_SIZE; i++)  //�迭 input�� 0���� 99���� ���ʷ� ����
        input[i] = i;

    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n"); 
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);     //�迭 input�� �ּ� ���

    answer = sum1(input, MAX_SIZE);      //�Լ� sum1�� ȣ���� 0���� 99���� ��� ���� �� answer�� ����
    printf("The sum is: %f\n\n", answer);//answer ���


    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n"); 
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);     //�迭 input�� �ּ� ���

    answer = sum2(input, MAX_SIZE);      //�Լ� sum2�� ȣ���� 0���� 99���� ��� ���� �� answer�� ����
    printf("The sum is: %f\n\n", answer);//answer ���


    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);     //�迭 input�� �ּ� ���

    answer = sum3(MAX_SIZE, input);
    printf("The sum is: %f\n\n", answer);
}

float sum1(float list[], int n) {       //�迭�� �ּҿ� ������ �޴´�
    printf("list \t= %p\n", list);      //�迭�� �ּ� ���
    printf("&list \t= %p\n\n", &list);  //�迭�� �ּ� ���

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];  //�迭�� ������ ��� ����
    return tempsum;          //���� �� ��ȯ
}

float sum2(float *list, int n) {        //�迭�� �ּҿ� ������ �޴´�
    printf("list \t= %p\n", list);      //�迭�� �ּ� ���
    printf("&list \t= %p\n\n", &list);  //�迭�� �ּ� ���

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list+i);  //�迭�� ������ ��� ���Ѵ�
    return tempsum;            //���� �� ��ȯ
}

float sum3(int n, float *list) {        //������ �迭�� �ּҸ� �޴´�
    printf("list \t= %p\n", list);      //�迭�� �ּ� ���
    printf("&list \t= %p\n\n", &list);  //�迭�� �ּ� ���

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list+i); //�迭�� ������ ��� ���Ѵ�
    return tempsum;           //���� �� ��ȯ
}