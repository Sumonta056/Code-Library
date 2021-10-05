#include <stdio.h>

struct point
{
    int x;
    int y;
}; // p1 ;// is like a normal variable calling

int main()
{
    struct point arr[10];

    arr[0].x = 21;
    arr[0].y = 31;

    arr[1].x = 21;
    arr[1].y = 31;

    printf("x = %d , y = %d \n", arr[0].x, arr[0].y);
    printf("x = %d , y = %d \n", arr[1].x, arr[1].y);
}
