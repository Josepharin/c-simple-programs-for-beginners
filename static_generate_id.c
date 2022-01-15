/* Demonstrate static local variable */

/* 
   First run the program without the keyword static on 
   variable s_itemID then run it with the keyword static 
   and see the difference 
*/
#include <stdio.h>

int generateID()
{
    // static int s_itemID = 0; // First run the program with this line commented out. The rerun with this line uncommented and the next line being commented out.
    int s_itemID = 0;
    return s_itemID++; // makes copy of s_itemID, increments the real s_itemID, then returns the value in the copy
}

int main(void) {

    printf("The first ID is: %d \n", generateID());
    printf("The second ID is: %d \n", generateID());
    printf("The third ID is: %d \n", generateID());

    return 0;
}
