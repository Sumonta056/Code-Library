#include <iostream>
#include <string>

using namespace std;
void showresult(string s, string::size_type i);

int main()
{
  string::size_type indx;
  string str("one two three, one two three");
  string str2;

  cout << "Searching for the last occurrence of 'two'\n";
  indx = str.rfind("two");
  showresult(str, indx);

  return 0;
}

// Display the results of the search.
void showresult(string s, string::size_type i) {

  if(i == string::npos) {
    cout << "No match found.\n";
    return;
  }
  cout << "Match found at index " << i << endl;

  cout << "Remaining string from point of match: "
       << s.substr(i) << "\n\n";
}