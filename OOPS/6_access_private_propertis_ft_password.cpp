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

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define Mi map<int, int>
#define mii map<pii, int>
#define all(a) (a).begin(), (a).end()
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)x.size()
#define endl '\n'

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mod 1000000007
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

class student
{
public:
    int roll;
    string name;

private:
    int age;

public:
    void print();
    void setage(int a , int pass);
};

void student::print()
{
    cout << name << " " << age << " " << roll;
}

void student::setage( int a , int pass)
{
    if( pass == 123) age = a ;
    else return;
    
}

int main()
{
    fast;

    student s1;

    s1.roll = 1;
    s1.name = "Mridul";

    // * s1.age  =  21 ; it will not take age
    // ? as it is private
    // ! but we can access it in different way

    int age , password ;
    cin>>age >> password ;
    s1.setage(age , password);



    // * calling class function
    s1.print();
}
