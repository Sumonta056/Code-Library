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

int level = 1;

void countingSort(vector<int>& arr, int n, int place)
{
    vector<int> output(n + 1);

    //* declare count array
    //* intial all value 0 and size 10 cz (0 - 9)
    int count[10] = {0};

    // Calculate count of elements
    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / place) % 10]++;
    }

    // Calculate cumulative frequency
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    // Place the elements in sorted order
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / place) % 10] - 1] = arr[i];
        count[(arr[i] / place) % 10]--;
    }

    //* print step
    cout << level << endl;
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << sp;
    }
    level++;
    cout << endl;

    //* store the output values in main array
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void radixSort(vector<int>& arr, int n)
{

    //* get the maximum number from array
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
    }

    // Apply counting sort to sort elements based on place value
    for (int place = 1; maxi / place > 0; place *= 10)
    {
        countingSort(arr, n, place);
    }
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

    radixSort(arr, n);

    //* print output
    cout << "Final" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << sp;
    }
    cout << endl;
}

/*
6
31 11 42 7 30 11
    */