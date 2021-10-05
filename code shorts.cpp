string numtostr(ll n)
{
    OS str1;
    str1 << n;
    return str1.str();
}
ll strtonum(string s)
{
    ll x;
    SS str1(s);
    str1 >> x;
    return x;
}
ll GCD(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}
ll LCM(ll a, ll b)
{
    ll gcd = GCD(a, b);
    return (a / gcd) * b;
}
const int M = 1e9 + 7;
ll mod(ll x)
{
    return (x % M + M) % M;
}

ll mul(ll a, ll b)
{
    return mod((mod(a) * mod(b)));
}

ll add(ll a, ll b)
{
    return mod(mod(a) + mod(b));
}