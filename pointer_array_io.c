#include <stdio.h>

#define ARRAY_SIZE 100 // Maximum array size

int main()
{
    int arr[ARRAY_SIZE];
    int N, i;
    int * ptr = arr;    // Pointer to arr[0] 

    printf("Enter array size: ");
    scanf("%d", &N);

    printf("Enter array elements:\n");
    for (i = 0; i < N; i++)
    {
        // (ptr + i) is equivalent to &arr[i]
        scanf("%d", (ptr + i));   
    }

    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        // *(ptr + i) is equivalent to arr[i]
        printf("%d, ", *(ptr + i));
    }

    return 0;
}