//Assignment - 3 : Insertion Sorting

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

    // * insertion sort
    // * Iterate from arr[1] to arr[n] over the array
    // * Compare the current element (key) to its previous
    // * If the key element is smaller than its previous, compare it to the elements before
    // * Move the greater elements one position up to make space for the swapped element

    // * time complexity = o(n^2) worst

    // ! start form 2nd element

    int i, j;
    int check = 0;
    int step = 1;

    for (i = 0; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];

            j = j - 1;
            check = 1;
        }

        arr[j + 1] = key;

        if (check == 1)
        {
            printf("Step = %d : ", step);
            output(arr, n);
            printf("\n");
            step++;
            check = 0;
        }
    }


    /*
    * how it works
    ! arrray 11 12 13 5 6 
    * in first loop i = 1 ; key = 11 ; j = i - 1 = 0
    * then , j >= 0 and arr[j] >  key
    ?  12 > 11 true enter the while loop
    * arr[j + 1] = arr[j]
    * arr[ 1] = arr [0]   - - -  arr[1] = 12
    * j = j --  ;  j = 0 - 1 = -
    ? loop breaks
    * arr[j+1]=key
    * arr[0] = 11
    ! arrray 11 12 13 5 6 
    * i = 2 ; key 13 ; j = 1
    * key is greater then arr[j]= arr[1]= 12
    ? will not enter while loop
    ! arrray 11 12 13 5 6 
    * i = 3  ; key = 5 ; j = 2
    * key is less then arr[j]=arr[2]= 13
    ? while loop entry
    * arr[j+1]=arr[j]  --  arr[3]=13
    * j == 1
    ? loop continue
    * arr[j+1]=arr[j]  --  arr[2]=12
    *  j == 0
    ? loop continue
    * arr[j+1]=arr[j]  --  arr[1]=11
    * j == -1
    ? loop breaks
    * arr[j+1]= key -- arr[0] = 5
    ! array 5 11 12 13 6
    */

}