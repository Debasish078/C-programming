// program to find the maximum and minimum of a matrix

#include <stdio.h>

#define MAX_SIZE 100   // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, rows, cols;

    /* Input size of the array */
    printf("Enter rows of the matrix : \n");
    scanf("%d", &rows);
    printf("Enter cols of the matrix : \n");
    scanf("%d", &cols);
    int size = rows * cols;

    /* Input array elements */
    printf("Enter elements in the matrix : \n ");

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }


    /* Assume first element as maximum and minimum */
    max = arr[0];
    min = arr[0];

    /*
     * Find maximum and minimum in all array elements.
     */
    for(i=1; i<size; i++)
    {
        /* If current element is greater than max */
        if(arr[i] > max)
        {
            max = arr[i];
        }

        /* If current element is smaller than min */
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    /* Print maximum and minimum element */
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
