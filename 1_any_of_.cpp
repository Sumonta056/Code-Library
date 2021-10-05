#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_odd(int n)
{
    return (n % 2 != 0);
}

int main(void)
{
    vector<int> v = {2, 4, 6, 8, 11};
    bool result;

    result = any_of(v.begin(), v.end(), is_odd);

    if (result == true)
        cout << "Vector contains at least one odd number." << endl;

    v[4] = 10;

    result = any_of(v.begin(), v.end(), is_odd);

    if (result == false)
        cout << "Vector contains all even number." << endl;

    return 0;
}