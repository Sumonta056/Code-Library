#include<stdio.h>

struct point
{
    int x ;
    int y ;
};// p1 ;// is like a normal variable calling


int main()
{
    struct point n = {1 , 2};

    printf("x = %d , y = %d \n" , n.x ,n.y) ;

    n.x = 20 ;

    printf("x = %d , y = %d \n" , n.x ,n.y) ;

}
