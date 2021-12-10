vector<string> divisble = {"25", "75", "50", "00"};
for (auto p : divisble)
{
    cout << p ; // * p = 25 then 75
}

// ! we can also access p (elements one by one like p[i]) 
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