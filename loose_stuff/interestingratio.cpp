#include <bits/stdc++.h>
using namespace std;

// bool is_prime(int n)
// {
//     bool prime = true;
//     if (n % 2 == 0 && n != 2)
//     {
//         return false;
//     }
//     for (int i = 2; i <= n-1; i++)
//     {
//         if (n % i == 0)
//         {
//             prime = false;
//             break;
//         }

//     }
//     return prime;
// }


// bool is_prime(int n)
// {

// }

// void sieve(int n)
// {
//     int count = 0;
//     vector <bool> is_prime(n, true);
//     is_prime[0] = false;
//     for (int i = 2; i * i < n; i++)
//     {
//         if (is_prime[i] == true)
//         {
//             for (int j = i * i; j < n; j+=i)
//             {
//                 is_prime[j] = false;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (is_prime[i] == true)
//         {
//             count++;
//         }
//     }
// }

const int MAXN = 10000005;
vector <bool> is_prime(MAXN, true);
vector <int> prefix_count(MAXN, 0);

void precompute()
{
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i < MAXN; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j < MAXN; j+=i)
            {
                is_prime[j] = false;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < MAXN; i++)
    {
        if (is_prime[i])
        {
            count++;
        }
        prefix_count[i] = count;
    }
}

int main()
{
    precompute();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int hcf = gcd(i, j);
                int a = i/hcf;
                int b = j/hcf;
                // if (i == 1)
                // {
                //     count++;
                // }
                // else if (hcf == 1 && i != 1)
                // {
                //     continue;
                // }
                if (a == 1)
                {
                    if (b < MAXN)
                    {
                        cout << prefix_count[b] << endl;
                    }
                    
                }


            }
            
        }
        
    }
}

//concept learned: finding prime numbers uptil n; sieve of eratosthenes - graecorowan-1I-god