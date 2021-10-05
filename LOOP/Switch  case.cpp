
#include<iostream>
using namespace std;
 int main()
 {
     int x;
      cout<<"Enter a number";
      cin>>x;

      switch(x)
      {
      case 1:
        cout<<"One";
        break;
      case 2:
        cout<< "Two";
        break;
      default:
        cout<<" Beyond limit";
      }


      //multiple switch statement

      char ch;

      cin>>ch;

      switch(ch)
             {
             case 'a':
             case 'e':
             case 'o':
             case 'i':
             case 'u':
                cout<<"vowel";
              break;
                          default:
                cout<<"consonant" ;

             }




 }
