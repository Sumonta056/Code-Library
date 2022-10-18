//        ** Sumonta Saha Mridul **                                    SWE - SUST
/*

 *        ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
 !       ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
 ?       ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
 *        ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
 !             ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
 ?       ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
 *        ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp " "
#define enter cout << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void countingSort(vector<int> arr, int n)
{
    vector<int> output(n + 1);

    //* get the maximum number from array
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
    }

    //* declare count array and initialize with 0
    vector<int> count(maxi + 1, 0);

    //* store the count of each value in the array
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    //* Now a cummulative sum in the count array
    for (int i = 1; i <= maxi; i++)
    {
        count[i] += count[i - 1];
    }

    /* This loop will find the index of each element of the original array in count array, and
  place the elements in output array*/

    //* traverse from last element
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    //* print output
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << sp;
    }
    cout << endl;
}

int main()
{
    fast;

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Sorting Elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << sp;
    }

    cout << endl;

    cout << "After Sorting Elements" << endl;

    countingSort(arr, n);
}

/*
6
31 11 42 7 30 11
    */