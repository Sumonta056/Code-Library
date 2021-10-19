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
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define Mi map<int, int>
#define mii map<pii, int>
#define all(a) (a).begin(), (a).end()
#define f first
#define se second
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)x.size()
#define endl '\n'
#define Y cout << "YES\n"
#define No cout << "NO\n"

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mod 1000000007
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;

bool cmp(pair<int, int> x, pair<int, int> y)
{
    if (x.first != y.first)
        return x.first > y.first;
    else
        return x.second < y.second; //if first element is equal then return the one with smaller second element
}

int main()
{
    fast;

    int n, m;
    cin >> n >> m;

    // * 2d string call out
    vector<string> v;
    for (int i = 0; i < 2 * n; ++i)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    vector<pair<int, int>> scores;

    for (int i = 0; i < 2 * n; ++i)
    {
        scores.push_back(make_pair(0, i));
    }
    for (int i = 0; i < m + 1; ++i)
    {
        sort(scores.begin(), scores.end(), cmp);
        
        for (int j = 0; j < 2 * n; j += 2)
        {
            int ind1 = scores[j].second;
            int ind2 = scores[j + 1].second;
            
            // * this part for 2d string
            if (v[ind1][i] == v[ind2][i])
            {
                continue;
            }
            else
            {
                if (v[ind1][i] == 'G')
                {
                    if (v[ind2][i] == 'C')
                    {
                        scores[j].first++;
                    }
                    else
                    {
                        scores[j + 1].first++;
                    }
                }
                else if (v[ind1][i] == 'C')
                {
                    if (v[ind2][i] == 'G')
                    {
                        scores[j + 1].first++;
                    }
                    else
                    {
                        scores[j].first++;
                    }
                }
                else
                {
                    if (v[ind2][i] == 'G')
                    {
                        scores[j].first++;
                    }
                    else
                    {
                        scores[j + 1].first++;
                    }
                }
            }
        }
    }

   
    }
    
