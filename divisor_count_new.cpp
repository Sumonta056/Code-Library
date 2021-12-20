int countDivisors(int n)
{
    ll count = 0;

    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                count++;
            else
            {
                count = count + 2;
            }
        }
    }

    return count ;
}

count = countDivisors(n-1) ;

        cout << count << endl;