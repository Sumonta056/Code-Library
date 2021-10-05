//Assignment - 1 : Bubble Sorting

// Name  : Sumonta Saha Mridul
// Roll  : 2019831056
// SWE - 19

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf(" ");
    }
}

int main()
{

    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int compare = 0, interchange = 0;

    // * bubble sort
    // * compare two nearest element from left to right
    // * then swap numbers
    // * after 1st loop we will found the highest value of array at last
    // * at end our array will be sorted

    // * time complexity = o(n^2) worst

    int i, j;
    int check = 0;
    int step = 1;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++) // * Last i elements are already in place
        {
            compare++;

            if (arr[j] > arr[j + 1])
            {
                // *swapping the element if element1 is greater than element2
                int a, b;

                a = arr[j];
                b = arr[j + 1];

                arr[j] = b;
                arr[j + 1] = a;

                interchange++;
                check = 1;
            }
        }

        if (check == 1)
        {
            printf("Step = %d : ", step);
            output(arr, n);
            printf("\n");
            step++;
            check = 0 ;
        }
    }

    printf("\n");
    printf("Total compare =  %d ", compare);

    printf("\n");
    printf("Total interchange =  %d ", interchange);
}