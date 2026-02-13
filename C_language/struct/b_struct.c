#include <stdio.h>
#include <string.h>

// Student
//  - name (string)
//  - id (string)
//  - age (int)
//  - grade (int array)


//Aout typedef
// typedef int Student; // Student is now an alias for int

typedef struct{

    char name[50];
    char id[10];
    int age;
    int grade[5];

} Student;

struct point{
 int x;
 int y;
}p1, p2, p3;   //3 strcuts of type point

//we can pass these structs to functions
void print_student(Student student);

int main(void)
{
    //instead of using struct Student now I can directly use Student
    Student kevin;
    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id, "005305252");
    kevin.age = 40;
    kevin.grade[0] = 1;
    kevin.grade[1] = 2;
    kevin.grade[2] = 3;
    kevin.grade[3] = 4;
    kevin.grade[4] = 4;

    print_student(kevin);

    p1.x = 10;
    p2.x = 20;

    return 0;
   
}

void print_student(Student student){

    printf("Name: %s\n", student.name);
    printf("ID: %s\n", student.id);
    printf("Age: %d\n", student.age);
    printf("Grades: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", student.grade[i]);
    }
    printf("\n");
    
}
