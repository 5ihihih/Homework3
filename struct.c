#include <stdio.h>

struct student1 {   //����ü ����
    char lastName;
    int studentId;
    char grade;
};

typedef struct {    //typedef�� 'student2'��� �ڷ����� �����
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    printf("[----- [����ȭ] [2022078036] -----]\n\n");
    
    struct student1 st1 = {'A', 100, 'A'};          

    printf("st1.lastName = %c\n", st1.lastName);   //��������ڸ� �̿��� �� ����鿡 ����� ���� ����Ѵ�
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);


    student2 st2 = {'B', 200, 'B'};  

    printf("\nst2.lastName = %c\n", st2.lastName); //��������ڸ� �̿��� �� ����鿡 ����� ���� ����Ѵ�
    printf("st2.studentId = %d\n", st2.studentId);  
    printf("st2.grade = %c\n", st2.grade);


    student2 st3;  //���� st3 ����
    st3 = st2;     //st3�� st2�� ����

    printf("\nst3.lastName = %c\n", st3.lastName); //��������ڸ� �̿��� �� ����鿡 ����� ���� ����Ѵ�
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n\n", st3.grade);


    //�� ������� ���� ��� ������ equal, �ϳ��� �ٸ��� not equal�� ����Ѵ�
    if(st3.grade == st2.grade && st3.lastName == st2.lastName && st3.studentId == st2.studentId ) 
        printf("equal\n");
    else
        printf("not equal\n");

    return 0;
    
}