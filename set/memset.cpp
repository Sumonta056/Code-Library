// ** Sumonta Saha Mridul **
// SWE - SUST


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;

 char str[] = "Hello World";
memset(str, 'o', 6); //take n = 6
cout << str<<endl;



int array[10];
   memset(array, 0, sizeof(array));
   for(int i = 0; i<10; i++){ cout << array[i] << " "; }
      cout << endl;
      memset(array, -1, sizeof(array));
   for(int i = 0; i<10; i++){ cout << array[i] << " "; }
      cout << endl;
      memset(array, 3, sizeof(array));
   for(int i = 0; i<10; i++){ cout << array[i] << " "; }
      cout << endl;



}