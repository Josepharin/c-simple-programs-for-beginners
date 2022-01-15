#include <stdio.h>
// mainipulation of a structure using its address.
struct Item {
    char name[20];
    int quantity;
    float price;
    float amount;
};

int main (){
    struct Item item1 = {"Sugar", 3, 20};
    struct Item *pitm;

    pitm = &item1;
    
    pitm->amount = (float)pitm->quantity * pitm->price;

    printf("Item is: \t %s\n", pitm->name);
    printf("Quantity is: \t %d\n", pitm->quantity);
    printf("Price is: \t $%.2f\n", pitm->price);
    printf("Amount is: \t $%.2f\n", pitm->amount);

    return 0;
}