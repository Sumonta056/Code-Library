//        ** Sumonta Saha Mridul **                                    SWE - SUST 
/*     

         ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
        ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
        ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
         ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
              ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
        ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
         ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;


#define F(i,s,e) for(ll i=s;i<e;++i)
#define ll long long
#define pb push_back
using vll = vector<ll>;
#define P(str) cout << str << endl
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  
   
const int N = int(1e5 + 3);


int main()
{ fast;
 
	int t;
	cin >> t;

	while (t--)
     {
		int n;
		cin >> n;

		vector<int> a(n);

		for (auto &it : a) cin >> it;       // 00 1 00 1 00

		while (a.back() == 0) a.pop_back(); // removing last 2 zero untill find 1
                                            // 00 1 00 1

		reverse(a.begin(), a.end());        // 1 00 1 00 

		while (a.back() == 0) a.pop_back(); // removing last 2 zero untill find 1
                                           //1 00 1

		cout << count(a.begin(), a.end(), 0) << endl; // counting total zero between 1 to 1
	}



}