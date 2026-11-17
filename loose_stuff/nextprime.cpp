#include <bits/stdc++.h>
using namespace std;
long long int maximum = 1e6;
vector <bool> is_prime_small(maximum, true);
vector <long long int> small_primes;

void sieve()
{
    is_prime_small[0] = is_prime_small[1] = false;
    for (int i = 2; i *i < maximum; i++)
    {
        if (is_prime_small[i] == true)
        {
            for (int j = i*i; j < maximum; j+=i)
            {
                is_prime_small[j] = false;
            }
        }
    }

}
void populate()
{
    for (long long int i = 0; i < maximum; i++)
    {
        if (is_prime_small[i] == true)
        {
            small_primes.push_back(i);
        }
    }

}

bool isLargePrime(long long int num)
{
    if (num < 2) return false;
    for (int p : small_primes)
    {
        if (1LL * p * p > num) break;
        if (num % p == 0) return false;
    }
    return true;

}

int main()
{
    void sieve();
    sieve();
    populate();
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        for (long long int i = n+1; i < 1e13; i++)
        {
            if (i <= 1000005)
            {
                if (is_prime_small[i] == true)
                {
                    cout << i << endl;
                    break;
                }
            }
            else
            {
                if (isLargePrime(i) == true)
                {
                    cout << i << endl;
                    break;
                }

            }

            // if (is_prime[i] == true)
            // {
            //     cout << i << endl;
            //     break;
            // }


        }




    }
}