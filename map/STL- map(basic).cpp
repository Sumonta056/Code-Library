#include<iostream>
#include<map>
#include<iterator>
using namespace std ;
int main()
{

   // variable declaration of map
    map < string , int> arr ;
    map < string , int> :: iterator it ;
    arr["c"] = 56;
    arr["b"] = 57;
    arr["a"] = 76;


    // arr[key] = value;
    cout<<arr["a"]<<endl;   //it will print the value

    it=arr.begin();
    // how to print column
    cout<<it->first<< " "<< it->second<<endl;

    //map will be automatically sorted on bases of key

    for(it = arr.begin() ;  it!=arr.end() ; it++ )
    {
        cout<<it->first<< " "<< it->second<<endl;
    }
}
