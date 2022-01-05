#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
   string string1( "This is a test string!");
   int location;
   
   cout << "Original string:\n" << string1 
        << "\n\n(find) \"is\" was found at: " << string1.find( "is" ); 
        

   return 0;
}