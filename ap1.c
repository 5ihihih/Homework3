#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[----- [����ȭ] [2022078036] -----]\n\n");

    int list[5];             //�迭�� ����
    int *plist[5] = {NULL,}; //������ �迭�� �����ϰ� ��� NULL�����ͷ� �ʱ�ȭ

    plist[0] = (int *)malloc(sizeof(int)); //int�� ũ�⸸ŭ ������ �Ҵ��� plist[0]�� ����Ű���� �Ѵ�

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;  //plist[0]�� ����Ű�� ������ 200 ����

    printf("list[0] = %d\n", list[0]);      //list[0]�� �� ���
    printf("&list[0] = %p\n", &list[0]);    //list[0]�� �ּ� ���
    printf("list = %p\n", list);            //list[0]�� �ּ� ���
    printf("&list = %p\n", &list);          //list[0]�� �ּ� ���

    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]);      //list[1]�� �� ���
    printf("&list[1] = %p\n", &list[1]);    //list[1]�� �ּ� ���
    printf("*(list+1) = %d\n", *(list + 1));//list[1]�� �� ���
    printf("list+1 = %p\n", list+1);        //list[1]�� �ּ� ���

    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]);  //plist[0]�� ����Ű�� ������ �� ���
    printf("&plist[0] = %p\n", &plist[0]);  //plist[0]�� �ּ� ���
    printf("&plist = %p\n", &plist);        //plist[0]�� �ּ� ���
    printf("plist = %p\n", plist);          //plist[0]�� �ּ� ���
    printf("plist[0] = %p\n", plist[0]);    //plist[0]�� ��(����Ű�� ������ �ּ�) ���
    printf("plist[1] = %p\n", plist[1]);    //������ �����͵��� NULL�����ͷ� �����ִ�
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);

    free(plist[0]); //�Ҵ�� �޸� ����
}