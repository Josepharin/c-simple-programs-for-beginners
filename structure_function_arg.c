#include <stdio.h>

struct Record{
    char candidate[20];
    float miles;
    int age;
    float weight;
};

void double_struct_values(struct Record *r){ // pass by reference
    r->miles *= 2;
    (*r).age *= 2;
    r->weight *= 2;
}
void double_struct_values2(struct Record r){ // pass by value
    r.miles *= 2;
    r.age *= 2;
    r.weight *= 2;
}

void main () {

    struct Record record1 = {"Jackson", 2.3, 30, 75.5};
    double_struct_values(&record1);

    printf("New numeric values:\n");
    printf("Miles:\t%f\n", record1.miles);
    printf("Age:\t%d\n", record1.age);
    printf("Weight:\t%f\n", record1.weight);
}


