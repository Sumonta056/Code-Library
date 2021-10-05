ll sum_of_digits(ll input)
{
    long long total = 0;

    while (input != 0) 
    {
        total += input % 10;
        input /= 10;
    }
    return total;
}