/**
 * C program to find first and last digit of a number
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int n, firstDigit, lastDigit, digits;

    /* Input a number from user */
    printf("Enter any number: ");
    scanf("%d", &n);

    /* Find last digit */
    lastDigit = n % 10;     

    /* Total number of digits - 1 */
    digits = (int)log10(n); 

    /* Find first digit */
    firstDigit = (int)(n / pow(10, digits)); 

    printf("First digit = %d\n", firstDigit);
    printf("Last digit = %d\n", lastDigit);

    return 0;
}