#include <stdio.h>
/*
    Working with an array of structures    
*/
void main(){
    int array_length;

    struct Student {
        char name[20];
        float score;
    };
    // get array length from program user
    printf("Enter number of students: ");
    scanf("%d", &array_length);

    // declare structure array
    struct Student students[array_length];

    float total = 0;
    
    // initialize all structures in the array students
    for (int i=0; i < array_length; i++){
        printf("Enter student %d's name: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter student %d's score: ", i+1);
        scanf("%f", &students[i].score);
        // update total variable
        total += students[i].score;
    }
    printf("The average score is %.3f\n", total/array_length);
}