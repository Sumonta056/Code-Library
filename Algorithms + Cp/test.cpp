#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
    long long l, r;
    scanf("%lld%lld", &l, &r);
    puts("YES");
    forn(i, (r - l) / 2 + 1)
        printf("%lld %lld\n", l + i * 2, l + i * 2 + 1);
}