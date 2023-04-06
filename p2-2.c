#include <stdio.h>

void print_one(int *ptr, int rows);

int main()
{
    printf("[----- [����ȭ] [2022078036] -----]\n\n");
    
    int one[] = {0, 1, 2, 3, 4};    

    printf("one = %p\n", one);          //one[0]�� �ּ� ���
    printf("&one = %p\n", &one);        //one[0]�� �ּ� ���
    printf("&one[0] = %p\n", &one[0]);  //one[0]�� �ּ� ���
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5);  //�Լ��� ȣ���� �迭�� �ּҿ� ������ �ѱ��

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5);      //�Լ��� ȣ���� �迭�� �ּҿ� ������ �ѱ��

    return 0;
}

void print_one(int *ptr, int rows)  //�迭�� �ּҿ� ������ �޴´�
{
    int i;
    printf ("Address \t\t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));  //�迭�� �ּҿ� �迭�� ���� ����Ѵ�
    printf("\n");
}