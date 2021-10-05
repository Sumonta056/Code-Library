#include <iostream>
#include <algorithm>
 
int main()
{
    int n = 5;
    int val = 1;
 
    int arr[n];
    std::fill_n (arr, n, val);
 
    // always prints 1
    std::cout << arr[rand() % n];
 
    return 0;
}