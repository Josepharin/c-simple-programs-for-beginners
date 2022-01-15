
/* This program should demonstrate to you that:
    1. arrays are passed by reference and not by value.
    2. individual array elements are passed by value.
    */

#include<stdio.h>

void doubleElements(int, int[*]);
void doubleArrayElement(double element);

int main(void) {

    int numbers[] = { 1, 2, 3, 4, 5 };
    double otherNumbers[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

    doubleElements(5, numbers);
    
    for (int i = 0; i < 5; i++)
        printf("numbers[%d] = %d\n", i, numbers[i]);

    doubleArrayElement(otherNumbers[3]);

    for (int i = 0; i < 5; i++)
        printf("otherNumbers[%d] = %lf\n", i, otherNumbers[i]);

    return 0;
}
// doubles each element in the array.
void doubleElements(int size, int arr[]) {
    for (int i = 0; i < size; i++)
        arr[i] *= 2; // double each array element.
}
// doubles a particular element from the array.
void doubleArrayElement(double element) {
    element *= 2;
    printf("Element is now %lf.\n", element);
}