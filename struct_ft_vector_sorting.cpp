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
#define s           second
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


struct Group
{
    string name ;
    int roll;
    float salary;
};

bool cmp ( Group a , Group b )
{
    
    //* return a.name < b.name ;  sort by name
    //* return a.roll < b.roll ;  sort by roll
    //* return a.salary < b.salary ;  sort by salary

    //! sort by roll
    //! if roll same , sort by name 
    //! if name same , sort by salary

    if(a.roll == b.roll) return a.name < b.name ;

    else if(a.name == b.name) return a.salary < b.salary ;
    
    return a.roll < b.roll ;
    
    
}

int main()
{ 
    fast;

    //* struct calling via vector
    vector<Group> v(5);

    for(int i = 0 ; i<5 ; i++)
    {
       //* struct ft vector input
       cin>>v[i].name>>v[i].roll>>v[i].salary ;

    }
    
    //* sorting by function 
    //* with this you can sort struct in any way you wanted

    sort ( v.begin() , v.end() , cmp);

    for(int i = 0 ; i<5 ; i++)
    {
       //* struct ft vector output
       cout<<v[i].name<<" "<< v[i].roll<<" " << v[i].salary<<endl; ;

    }




}

/* 

! prime numbers
bool is_prime(int X)
{
	for(int i = 2; i*i < X; i++)
    {
		if(X % i == 0)
        {
			return false;
		}
	}
	return true;
}

! GCD 
int gcd(int a, int b)
{
	if(b == 0)
    {
		return a;
	}
	else
    {
		return gcd(b, a % b);
	}
}

*/
