/* This program saves in an array and prints out the first 20 Fibonacci numbers */

#include <stdio.h> 

int main( void ) {
    
    /* Declare variables including the fibonacci array */
    int i, fibonacci[20];
    
    /* initialize the first two elements of the array */
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    /* Use a for loop to calculate the remaining elements of the array */
    for( i = 2; i < 20; i++ )
        fibonacci[ i ] = fibonacci[ i - 2 ] + fibonacci[i - 1];
    
    /* Print out the elements of the array */   
    for( i = 0; i < 20; i++ )
        printf( "Fibonacci[ %d ] = %d\n", i, fibonacci[ i ] );
        
    return 0;
}