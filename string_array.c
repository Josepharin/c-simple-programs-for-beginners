/* 
    This program demonstrates how you can use an array of strings 
    as a member element in your structure.
*/
#include <stdio.h>

struct Class {
    char name[20];
    char students[5][20]; // {"Ben", "Pea", "Paul", "Rodo", "Benji"}
    float marks[5]; // {2,3,4,5,6}
};

void main(){

    struct Class class1 = {"Math"};

    for (int i = 0; i<5; i++){
        printf("Enter student %d's name ", i+1);
        scanf("%s", class1.students[i]);
        printf("Enter student %d's mark ", i+1);
        scanf("%f", &class1.marks[i]);
    }

    printf("Student 5's name: %s\n", class1.students[4]);
    printf("Studnet 5's mark: %f\n", class1.marks[4]);
}