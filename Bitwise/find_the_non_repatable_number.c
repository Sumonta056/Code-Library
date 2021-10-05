#include <stdio.h> 
  
// Function to return the only odd 
// occurring element 
int findOdd(int arr[], int n) 
{ 
    int res = 0, i; 
    for (i = 0; i < n; i++) 
    {
        res ^= arr[i]; 
        printf("%d\n" , res);

    }
        
    return res; 
} 
  
// Driver Method 
int main(void) 
{ 
    int arr[] = { 1,2,2,3,1}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("The odd occurring element is %d ", 
           findOdd(arr, n)); 
    return 0; 
} 