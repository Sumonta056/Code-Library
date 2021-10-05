#include <stdio.h>
#include <cstdlib>

void update(int *x,int *y) {
    int *p;
    *p=*x;
    *x = *x + *y;

    *y = abs(*p - *y);


}

int main() {
    int a, b;


    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
/*
void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
} */
