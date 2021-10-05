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
    arr["a"] =24;
    //arr.erase("a");
    //arr.insert(make_pair("a",0));

    // arr[key] = value;
    cout<<arr["a"]<<endl;   //it will print the value

    it=arr.begin();
    // how to print column
    cout<<it->first<< " "<< it->second<<endl;


     int p;
     p=it->second;
     cout<<p<<"l";

}

