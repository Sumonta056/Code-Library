#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k=0;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    for(int i = 0  ; i<n ; i++)
    {
        int swapnumber=0 ;

        for (int j =0 ; j < n-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
               swap(a[j], a[j+1]);
               swapnumber++;
               k++;
            }

        }

        if(swapnumber==0)
        {
         break;
        }

    }
    cout<<"Array is sorted in "<<k<<" swap."<<endl;
    cout<<"First element: "<<a[0]<<endl;
    cout<<"Last element: "<<a[n-1];
    return 0;
}
/*
for (int i = 0; i < n; i++) {
    // Track number of elements swapped during a single array traversal
    int numberOfSwaps = 0;

    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numberOfSwaps++;
        }
    }

    // If no elements were swapped during a traversal, array is sorted
    if (numberOfSwaps == 0) {
        break;
    }
}
*/
