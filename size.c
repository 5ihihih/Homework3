#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("[----- [����ȭ] [2022078036] -----]\n\n");
    
    int **x;  //���������� x�� �����Ѵ�

    printf("sizeof(x) = %lu\n", sizeof(x));     //������������ ũ�⸦ ���
    printf("sizeof(*x) = %lu\n", sizeof(*x));   //���������Ͱ� ����Ű�� ���� ũ��(�ּ��� ũ��) ���
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //int���� ����Ű�� �������̹Ƿ� 4byte ���
}