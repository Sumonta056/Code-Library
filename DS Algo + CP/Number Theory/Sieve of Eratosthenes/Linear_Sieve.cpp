/*
    * Complexity : O(n)
    * Range : less than 10^7
    * More memory ussage
    * Link : https://cp-algorithms.com/algebra/primeime-sieve-linear.html#algorithm

    * Algorithm :
    * calculate minimum primeime factor                ; lowestprimeime[i]
    * store the list of all the found primeime numbers ; primeime[i]
    * initialize the values lowestprimeime[i] with zeros, which means that we assume all numbers are primeime

    Now we'll go through the numbers from 2 to . We have two cases for the current number :
    * lowestprimeime[i] == 0 ; the number is primeime and push it to primeime array
    ? if primeime then set value for lowestprimeime[i] = i ;

    * if lowestprimeime[i] != 0 : the number is composite ; it lowest primeime is already set before

    * now use i and iterate over primeime array :
    ! set value of lowest primeime : lowestprimeime [ i * primeime[j] ] = primeime[j];
    ! CARE : prime[j] <= lowestprimeime[j]
    ? where     j < primeime.size() && prime[j] <= lowestprimeime[j] && i * primeime[j] <= n
    ? iterate over all primeimes with i

    * Same case
    lowest primeime [i] ==  0 for all inital

    *for : i = 2
    lowestprimeime[2] == 0 : 2 is primeime and lowest primeime for primeime value is it self

    now lowestprimeime[2] = 2
    and primeime.push_back(2);

    now i is = 2 and in primeime array we have a value = 2 which index j = 0
   * now set lowestprimeime [2 * primeime[0]] = primeime[0]
                        [ 2 * 2 ] = 2 ;
            for lowest primeime[4] = 2 set done

    ? for : i = 3
    lowestprimeime[3] == 0 : 3 is primeime and lowest primeime for primeime value is it self

    now lowestprimeime[3] = 3
    and primeime.push_back(3);

    now i is = 3 and in primeime array we have a value = 2 ,3 which index j
   * now set lowestprimeime [3 * primeime[0]] = primeime[0]
                        [ 3 * 2 ] = 2 ;
            for lowest primeime[6] = 2 set done
    * now set lowestprimeime [3 * primeime[1]] = primeime[1]
                        [ 3 * 3 ] = 3;
            for lowest primeime[3] = 2 set done
            ? loop ended

    ? for : i = 4
    lowestprimeime[4] == 2 : 3 is not primeime sp this part will skip

    //now lowestprimeime[3] = 3
    //and primeime.push_back(3);

    now i is = 4  and in primeime array we have a value = 2 ,3 which index j
   * now set lowestprimeime [4 * primeime[0]] = primeime[0]
                        [ 4 * 2 ] = 2 ;
            for lowest primeime[8] = 2 set done
    ! NOW loop breaks cause now j = 1 ; prime[j] == 3;
    ! and i == 4 : lowestprime[i] = 2
    ! prime[j] > lowestprime[i] : so break rules and loop
    // now set lowestprimeime [4 * primeime[1]] = primeime[1]
      //                  [ 4 * 3 ] = 3;
        //    for lowest primeime[3] = 2 set done
            ? loop ended



*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void linearSieve(ll n)
{

    vector<int> lowest_primeime(n + 1);
    vector<int> prime;

    for (int i = 2; i <= n; ++i)
    {
        // * check if prime
        if (lowest_primeime[i] == 0)
        {
            lowest_primeime[i] = i;
            prime.push_back(i);
        }

        for (int j = 0; j < (int)prime.size() && i * prime[j]  <= n&& (prime[j] <= lowest_primeime[i]) ; ++j)
        {       
                lowest_primeime[i * prime[j]] = prime[j];
                // cout << i << " " << prime[j] << endl;
                // * if (i % prime[j] == 0) break;
                // * also can use this if want to avoid  prime[j] <= lowest_primeime[i]        
        }
    }

    // * print prime
    for (auto it : prime)
        cout << it << endl;
}

int main()
{
    ll n = 37;
    linearSieve(n);
}