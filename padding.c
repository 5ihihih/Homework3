#include <stdio.h>

struct student {
    char lastName[13]; 
    int studentId; 
    short grade;
};

int main()
{
    printf("[----- [오인화] [2022078036] -----]\n\n");

    struct student pst;  //구조체 변수 pst선언

    printf("size of student = %ld\n", sizeof(struct student));  
    //구조체의 크기를 출력한다. 이때 padding으로인해 24byte가 출력된다.
    printf("size of int = %ld\n", sizeof(int));  //int의 크기(4byte)를 출력
    printf("size of short = %ld\n", sizeof(short)); //short의 크기(2byte)를 출력

    return 0;
}