//Assignment - 2 : Selection Sort

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

    // * slection sort
    // * compare ith element with the other element of the array
    // * then swap numbers if ith is greater than i+1th element
    // * our job is to find the 1st lowest number of the array and put it 1st element of array
    // * after 1st loop we will found the lowest value of array at first
    // * at end our array will be sorted

    // * time complexity = o(n^2) worst

    int i, j;
    int check = 0;
    int step = 1;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            compare++;

            if (arr[i]>arr[j])
            {
                // *swapping the element if element1 is greater than element2
                int a, b;

                a = arr[i];
                b = arr[j];

                arr[i] = b;
                arr[j] = a;

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
            check = 0;
        }
    }

    printf("\n");
    printf("Total compare =  %d ", compare);

    printf("\n");
    printf("Total interchange =  %d ", interchange);
}