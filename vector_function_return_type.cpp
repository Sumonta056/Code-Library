#include <iostream>
#include <vector>
#include <iterator>

using std::cout; using std::endl;
using std::vector;

vector<int> &multiplyByFive(vector<int> &arr)
{
    for (auto &i : arr) {
        i *= 5;
    }
    return arr;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    vector<int> arrby5;

    cout << "arr    - | ";
    copy(arr.begin(), arr.end(),
         std::ostream_iterator<int>(cout," | "));
    cout << endl;

    arrby5 = multiplyByFive(arr);

    cout << "arrby5 - | ";
    copy(arrby5.begin(), arrby5.end(),
         std::ostream_iterator<int>(cout," | "));
    cout << endl;

    return EXIT_SUCCESS;
}