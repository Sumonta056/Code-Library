#include <iostream>
#include <utility>
#include <vector>

using namespace std;


int main()
{
    vector< pair<int, int> > v;
    int N = 5;
    const int threshold = 2;
    for(int i = 0; i < N; ++i)
        v.push_back(make_pair(i, i));

    int i = 0;
    while(i < v.size())
        if (v[i].second > threshold)
            v.erase(v.begin() + i);
        else
            i++;

    for(int i = 0; i < v.size(); ++i)
        cout << "(" << v[i].first << ", " << v[i].second << ")\n";

    cout << "Done" << endl;
}