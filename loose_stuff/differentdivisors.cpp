#include <bits/stdc++.h>
using namespace std;

// sieve
int n = 1e5;
vector <bool> is_prime(1e5, true);
void sieve()
{

    for (int i = 2; i * i < n; i++)
    {
        is_prime[0] = is_prime[1] = false;
        if (is_prime[i] == true)
        {
            for (int j = i*i; j < n; j+=i)
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
        long long int d;
        cin >> d;
        int a;
        int b;
        bool checker = false;
        bool otherchecker = false;
        int at = d+1;
        int atat;
        while (checker == false)
        {
            if (is_prime[at] == true)
            {
                a = at;
                atat = at + d;
                checker = true;

            }
            else
            {
                at++;
            }

        }
        while (otherchecker == false)
        {
            if (is_prime[atat] == true)
            {
                b = atat;
                otherchecker = true;
            }
            else
            {
                atat++;
            }
        }
        cout << a*b << endl;
        // f)
        {


        }

        // long long int d;
        // cin >> d;
        // cout << 1*(1+d)*(1+2*d) << endl;
    }
}