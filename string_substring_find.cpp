#include <iostream>
#include <string>
using namespace std;

int main()
{
  int i;
  string s1 ="this is a test.";
  string s2;

  i = s1.find("is");
  if(i!=string::npos) {
    cout << "Match found at " << i << endl;
    cout << "Remaining string is:\n";
    s2.assign(s1, i, s1.size());
    cout << s2;
  }
  cout << "\n\n";


  return 0;
}