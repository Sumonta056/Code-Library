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

int main()
{
    fast;

    int t;
    cin >> t;

    int cas = 1;

    while (t--)
    {
        ll ans = 0;
        int i = 0;

        string a;
        int b;
        cin >> a >> b;

        b = abs(b); // b >= 0 always

        while (i < a.size())
        {
            if(a[i] == '-') 
            {
                i++;
                continue;
            }

            int num = int(a[i] - '0');
            //cout << num << endl;

            ans = ans * 10;
            ans = ans + num;
            ans = ans % b;
            

            //cout << ans << endl;

            i++;
        }

        if (ans == 0)
            cout << "Case " << cas << ": divisible" << endl;
        else
            cout << "Case " << cas << ": not divisible" << endl;

        cas++;
    }
}

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;
//* char a = '8';   int num = a - '0' ;  (  s[i]-'0' == 8 )
