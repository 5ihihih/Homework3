#include <stdio.h>

struct student1 {   //구조체 선언
    char lastName;
    int studentId;
    char grade;
};

typedef struct {    //typedef로 'student2'라는 자료형을 만든다
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    printf("[----- [오인화] [2022078036] -----]\n\n");
    
    struct student1 st1 = {'A', 100, 'A'};          

    printf("st1.lastName = %c\n", st1.lastName);   //멤버연산자를 이용해 각 멤버들에 저장된 값을 출력한다
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);


    student2 st2 = {'B', 200, 'B'};  

    printf("\nst2.lastName = %c\n", st2.lastName); //멤버연산자를 이용해 각 멤버들에 저장된 값을 출력한다
    printf("st2.studentId = %d\n", st2.studentId);  
    printf("st2.grade = %c\n", st2.grade);


    student2 st3;  //변수 st3 선언
    st3 = st2;     //st3에 st2를 대입

    printf("\nst3.lastName = %c\n", st3.lastName); //멤버연산자를 이용해 각 멤버들에 저장된 값을 출력한다
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n\n", st3.grade);


    //각 멤버들을 비교해 모두 같으면 equal, 하나라도 다르면 not equal을 출력한다
    if(st3.grade == st2.grade && st3.lastName == st2.lastName && st3.studentId == st2.studentId ) 
        printf("equal\n");
    else
        printf("not equal\n");

    return 0;
    
}