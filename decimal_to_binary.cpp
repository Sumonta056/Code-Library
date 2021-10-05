string decToBinary(ll n)
{
    string binaryNum;
 
    ll i = 0;
    while (n > 0)
    {
        char ch = (n % 2 + '0');
        binaryNum = ch + binaryNum;
        n = n / 2;
        i++;
    }
    // cout << "Binary: " << binaryNum << endl;
    return binaryNum;
}