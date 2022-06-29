bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());

    if (S == P)
        return 1;
    else
        return 0;
}
