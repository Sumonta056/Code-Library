//        ** Sumonta Saha Mridul **                                    SWE - SUST 
/*     

         ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
        ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
        ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
         ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
              ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
        ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
         ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define ull         unsigned long long
#define pb          push_back
#define pii         pair<int,int>
#define pll         pair<long,long>
#define mp(a,b)     make_pair(a,b)
#define vi          vector<int>
#define vll         vector<ll>
#define vii         vector<pii>
#define Mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define f           first
#define se           second
#define lb          lower_bound
#define ub          upper_bound
#define sz(x)       (int)x.size()
#define endl         '\n'

#define F(i,s,e)    for(ll i=s;i<e;++i)
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define rem(i,a,b)  for(int i=a;i>b;i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  


#define mod   1000000007
#define INF   numeric_limits<ll>::max();
#define NINF  numeric_limits<ll>::min();
const int N = int(1e5 + 3);

class student
{
    public:
    int age;
    char *name;

   
    student( int age , char *name)
    {
        this->age = age ;

        //*  shallow copy
        //*  this -> name = name ;


        //? deep copy
        this -> name = new char[strlen(name)+1];
        strcpy(this->name , name) ;
    }

    // * copy constructor
    student(student const &s )
    {
        this->age = s.age;

        //*  shallow copy
        //*  this -> name = name ;


        //? deep copy
        this -> name = new char[strlen(s.name)+1];
        strcpy(this->name , s.name) ;

      
    }

    

    void print()
    {
       cout <<age<<" "<< name << endl;
    }

};


int main()
{ 
    fast;

    char name[] = "abcd" ;
    
    student s1(20 , name);
    s1.print();
    
    student s2(s1);
    // * in built copy constructor do shallow copy like pointer : s1 will also change name

    s2.name[0] = 'x' ;

    s1.print();
    s2.print();

   

    


}


