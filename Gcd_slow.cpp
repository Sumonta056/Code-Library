#include <iostream> 
using namespace std;    
int GCD(int, int);
int main() 
{ 
    int x , y; 
    cout<<"Enter two number: ";
    cin>>x>>y;
    
    cout<<"GCD("<< x <<", "<< y <<") = "<< GCD(x, y); 
    return 0;
}
   
int GCD(int x, int y) 
{ 
    if (y == 0) 
        return x; 
        
    return GCD(y, x % y);  
      
}