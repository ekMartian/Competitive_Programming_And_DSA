// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         long long int n;
// //         cin >> n;
// //         long long int k = 1;
// //         while ((long long int)pow(k, n) % n != 0)
// //         {
// //             k++;
// //         }
// //         cout << k << endl;


// //     }
// // }

// #include <bits/stdc++.h>
// using namespace std;

// void SieveOfEratosthenes(int n)
// {
//     // Create a boolean array "prime[0..n]" and initialize
//     // all entries it as true. A value in prime[i] will
//     // finally be false if i is Not a prime, else true.
//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));

//     for (int p = 2; p * p <= n; p++) {
//         // If prime[p] is not changed, then it is a prime
//         if (prime[p] == true) {
//             // Update all multiples of p
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }

//     // Print all prime numbers
//     for (int p = 2; p <= n; p++)
//         if (prime[p])
//             cout << p << " ";
// }

// // Driver Program to test above function
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector <bool> prime(n+1);
//     }
//     // int n = 30;
//     // cout << "Following are the prime numbers smaller "
//     //      << " than or equal to " << n << endl;
//     SieveOfEratosthenes(n);
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int largest = 1e9;
vector <bool> is_prime(largest, true);



void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= largest; i++)
    {
        if (is_prime[i] == true)
        {
            for (int j = i * i; j <= largest; j+=i)
            {
                is_prime[j] = false;
            }
        }
    }
}

int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int product = 1;
        for (int i = 0; i <= n; i++)
        {
            if (is_prime[i] == true && n % i == 0)
            {
                product*=i;
            }

        }
        cout << product << endl;
    }

}