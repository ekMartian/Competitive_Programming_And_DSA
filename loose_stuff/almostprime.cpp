#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3005;
vector <int> primes(MAXN, 0);


int main()
{
    primes[0] = 0;
    primes[1] = 1;
    for (int i = 2; i < MAXN; i++)
    {
        if (primes[i] == 0)
        {
            for (int j = i; j < MAXN; j+=i)
        {
            
            
                primes[j]++;
            
        }

        }
        
    }
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        if (primes[i] == 2)
        {
            count++;
        }

    }
    cout << count << endl;
    // for (int i = 2; i * i < MAXN; i++)
    // {
    //     for (int j = i * i; j < MAXN; j+=i)
    //     {
    //         is_prime[j]++;
    //     }
    // }
    
    // for (int i = 1; i <= n; i++)
    // {
    //     if (is_prime[i] == 2)
    //     {
    //         count++;
    //     }
    // }
    // cout << count << endl;
}