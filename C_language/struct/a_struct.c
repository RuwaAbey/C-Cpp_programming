#include <stdio.h>
#include <string.h>

// Student
//  - name (string)
//  - id (string)
//  - age (int)
//  - grade (int array)

struct Student {

    char name[50];
    char id[10];
    int age;
    int grade[5];

};

int main(void)
{
    struct Student kevin;
    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id, "000232412");
    kevin.age = 40;
    kevin.grade[0] = 1;
    kevin.grade[1] = 2;
    kevin.grade[2] = 3;
    kevin.grade[3] = 4;
    kevin.grade[4] = 5;
    printf("Name: %s\n", kevin.name);
    printf("ID: %s\n", kevin.id);
    printf("Age: %d\n", kevin.age);
    printf("Grades: ");

    for (int i = 0; i < 5; i++)
        printf("%d ",kevin.grade[i]);
    
    printf("\n");
    

    


    return 0;

}