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

    ll maxSize = 10e6;
    vector<ll> primes;
    vector<bool> isprime(maxSize, true);
    vector<ll> ans;

    void sieve()
    {
        for (ll i = 3; i * i <= maxSize; i++)
        {
            if (isprime[i] == true)
            {
                for (ll j = i * i; j <= maxSize; j += i)
                {
                    isprime[j] = false;
                }
            }
        }

        primes.push_back(2);

        for (ll i = 3; i <= maxSize; i += 2)
        {
            if (isprime[i] == true)
                primes.push_back(i);
        }
    }

    void sol()
    {
        ll size = primes.size();
        for (ll i = 0; i < size - 1; i++)
        {
            for (ll j = i + 1; j < size; j++)
            {
                ll mul = primes[i] * primes[j];
                if(mul > 10527449) break; // no need extra calculation
                ans.push_back(mul);
                // cout << mul << endl;
            }
        }

        sort(ans.begin() , ans.end());
    }

    int main()
    {
        fast;
        sieve();
        sol();
        //cout << ans.size() <<endl;
        int t;
        cin >> t;

        while (t--)
        {
            ll x;
            cin >> x;

            cout << ans[x - 1] << endl;
        }
    }
