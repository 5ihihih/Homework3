#include <stdio.h>

struct student {
    char lastName[13]; 
    int studentId; 
    short grade;
};

int main()
{
    printf("[----- [����ȭ] [2022078036] -----]\n\n");

    struct student pst;  //����ü ���� pst����

    printf("size of student = %ld\n", sizeof(struct student));  
    //����ü�� ũ�⸦ ����Ѵ�. �̶� padding�������� 24byte�� ��µȴ�.
    printf("size of int = %ld\n", sizeof(int));  //int�� ũ��(4byte)�� ���
    printf("size of short = %ld\n", sizeof(short)); //short�� ũ��(2byte)�� ���

    return 0;
}