#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
#define endl '\n'

int cnt(string s, string p)
{
    for (int i = s.size() - 1, j = 1; i >= 0; i--)
    {
        if (s[i] == p[j])
            j--;
        if (j == -1)
            return s.size() - i - 2;
    }
    return s.size();
}

void solve()
{
    string s;
    cin >> s;

    vector<string> v = {"25", "75", "50", "00"};

    int ans = s.size();
    for (string p : v)
    {
        cout << 1 << p << endl;
        ans = min(ans, cnt(s, p));
        cout << 2 << ans << endl;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;

    while (t--)
        solve();

    return 0;
}