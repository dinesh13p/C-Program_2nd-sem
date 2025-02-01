#include <stdio.h>
int main()
{
    int numbers[5] = {640, 34, 54, 112, 22}; // Array to be sorted
    int size = 5;                            // Size of the array
    int temp;                                // Temporary variable for the swapping
    int i, j;

    printf("Original Array: \n");
    for(i = 0; i < size; i++){
        printf("%d\t", numbers[i]);
    }

    // Bubble Sort Algorithm
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                // swapp the numbers[j] and numbers[j + 1]
                 temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array
    printf("\nSorted array in ascending order: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", numbers[i]);
    }
    printf("\n");

    return 0;
}